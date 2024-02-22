function error = LQR_Vel(Q1,Q2,Q3,Q4,R,A,B,state,control,input_Eq)


    Ts = 0.005; % Sampling Time
    
    % Initalising the A and B matrix
    A0 = double(subs(A, [state,control], [zeros(1,12), input_Eq]));
    B0 = double(subs(B, [state,control], [zeros(1,12), input_Eq]));
    
    % Removing position states to ensure (A,Q^(1/2)) is detectable
    A_v = A0(4:12,4:12);
    B_v = B0(4:12,:);
    
    % Isolating relevant states: Yaw, v_x, v_y, v_z
    C_v = zeros(4,12);  % Ignoring positional states
    C_v(1,6) = 1;
    C_v(2,7) = 1;
    C_v(3,8) = 1;
    C_v(4,9) = 1;
    C_v = C_v(:,4:12);
    
    % Q Matrices
    Q_z = diag([Q1,Q2,Q3,Q4]);
    Q_v = C_v'*Q_z*C_v;
    
    % R matrix
    R = R*diag([1,1,1,1]);
    
    [K,~,~] = lqrd(A_v,B_v*2,Q_v,R,Ts);
    
    openProject('LQR_vel/HoverWithLQR.prj');
    simParams.StartTime = "0";
    simParams.StopTime = "10";
    simInfo = sim('parrotMinidroneHover',simParams);
    cmds = load("mainModels/cmdData.mat");
    idx = [7,8,9,6];
    for i = 1:4
       error = mse(simInfo.estimatedStates.signals.values(1:11000,idx(i)),...
        cmds.ans.Data(1:11000,idx_legend(i)));
    end
    error = sum(error)
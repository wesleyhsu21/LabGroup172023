function Dcontrol_v = DControl(A0i, B0i, Qvi, R, Ts)

    [K, ~, ~] = lqrd(A0i, B0i, Qvi, R, Ts);
    
    % Splitting K into non-augmented matrices
    % Proportional Gain
    Kp_v = zeros(4,3);
    Kp_v(:,4:12) = K(:,1:9);
    
    % Integral Gain
    Ki_v = zeros(4,12);
    Ki_v(:,6:9) = K(:,10:13);
    
    % Discrete Controller State Space
    Acontrol_v = eye(12);
    Bcontrol_v = eye(12)*Ts;
    Ccontrol_v = -Ki_v;
    Dcontrol_v = -Kp_v;


end
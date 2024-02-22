function Fcontrol_vf = FControl(A0i, B0i, Qvif, R, Ts, A0_vf, B0_vf, C0_vf)

    [K_velf0, ~, ~] = lqrd(A0i, B0i, Qvif, R, Ts);
    
    Kp_vf = zeros(4,3);
    Kp_vf(:,4:12) = K_velf0(:,1:9);
    
    % Resizing Matrices for 4x4
    Ki_vf = K_velf0(:,10:13);
    Acontrol_vf = eye(4);
    Bcontrol_vf = eye(4)*Ts;
    Ccontrol_vf = -Ki_vf;
    Dcontrol_vf = zeros(4);
    
    Kcontrol_vf = -Kp_vf;       % Proportional Gain
    
    ABK = A0_vf - B0_vf * Kp_vf(:,4:12);        % Making the dimensions agree (ignoring positional)
    
    Kr = -inv(C0_vf * inv(ABK) * B0_vf);
    
    Fcontrol_vf = Kr;
end
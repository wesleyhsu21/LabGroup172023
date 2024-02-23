function [Acontrol_pf] = Acontrol_f(A0pi, B0pi, Qpif, R, Ts, A0_pf, B0_pf, C0_pf)

[K_pif, ~, ~] = lqrd(A0pi, B0pi, Qpif, R, Ts);
Kp_pf = K_pif(:,1:12);

% K_i matrix, needs to be a 4x4 matrix
Ki_pf = zeros(4);
Ki_pf(:,1:3) = K_pif(:,13:15);  % Integral states of x,y,z
Ki_pf(:,4) = K_pif(:,16);       % Integral state of psi

% We want A, B and C to be dimension 4x4
Acontrol_pf = eye(4);
Bcontrol_pf = eye(4)*Ts;
Ccontrol_pf = -Ki_pf;
Dcontrol_pf = zeros(4);

Kcontrol_pf = -Kp_pf;   % Proportional gain

ABK = A0_pf - B0_pf*Kp_pf;

Kr = -inv(C0_pf * inv(ABK) * B0_pf);

Fcontrol_pf = Kr;
end
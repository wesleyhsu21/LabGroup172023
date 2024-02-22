function [Dcontrol_p] = Dcontrol(A0i, B0i, Qpi, R, Ts)

[K, ~, ~] = lqrd(A0i, B0i, Qpi, R, Ts);

% Splitting K into non-augmented matrices
Kp_pos = K(:,1:12);         % Proportional gain

Dcontrol_p = -Kp_pos;

end
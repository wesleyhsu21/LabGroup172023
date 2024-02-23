function [Ccontrol_p] = Ccontrol(A0i, B0i, Qpi, R, Ts)

[K, ~, ~] = lqrd(A0i, B0i, Qpi, R, Ts);

% Splitting K into non-augmented matrices
Kp_pos = K(:,1:12);         % Proportional gain

Ki_pos = zeros(4,12);       % Initalising
Ki_pos(:,1:3) = K(:,13:15); % First 3 columns of Ki_pos are: xint, yint, zint
Ki_pos(:,6) = K(:,16);      % 6th column of Ki_pos is: psiint (yaw integral)

Ccontrol_p = -Ki_pos;

end
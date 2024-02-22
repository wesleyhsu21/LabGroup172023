clear 
close all 
clc
%% Create real symbolic variables for states, inputs, MVs and parameters
syms input_1 input_2 input_3 input_4 Ixx Iyy Izz k l m b g real
syms x y z phi theta psi vx vy vz p q r real

load UAV_NominalParameters % Make sure this is in your path
%IxxVal  %Units kg * m^2
%IyyVal  %Units kg * m^2
%IzzVal  %Units kg * m^2
%kVal  %Units N * s^2 = kg * m
%lVal  %Units m
%mVal  %Units kg
%bVal  %Units N * m * s^2= kg * m^2
gVal = 9.81; %Units kg * m / s^2

paramValues = [IxxVal IyyVal IzzVal kVal lVal mVal bVal gVal];

%R-ZYX Euler
Rz = [cos(psi), -sin(psi), 0;
    sin(psi), cos(psi), 0;
    0, 0, 1];
Ry = [cos(theta), 0, sin(theta);
    0, 1, 0;
    -sin(theta), 0, cos(theta)];
Rx = [1, 0, 0;
    0, cos(phi), -sin(phi);
    0, sin(phi), cos(phi)];

% Rotation matrix from body frame to inertial frame
R_Euler = Rz*Ry*Rx;

% Thrust force
Fz = (input_1 + input_2 + input_3 + input_4);

% Moments
L = l * (- input_1 + input_2 + input_3 - input_4);
M = l * (- input_1 - input_2 + input_3 + input_4);
N = (b ./ k) * (input_1 - input_2 + input_3 - input_4);

% Position in global frame of reference
f(1:3) = [vx; vy; vz];

% Euler angles rates
f(4) = p + (q * sin(phi) + r * cos(phi)) * tan(theta);
f(5) = q * cos(phi) - r * sin(phi);
f(6) = (q * sin(phi) + r * cos(phi)) / cos(theta);

% Acceleration in inertial frame
f(7:9) = R_Euler*[0;0;Fz]/m + [0;0;g];

% Rotational Acceleration
f(10) = (L + (Iyy - Izz) * q * r) / Ixx;
f(11) = (M + (Izz - Ixx) * p * r) / Iyy;
f(12) = (N + (Ixx - Iyy) * p * q) / Izz;

% Replace parameters
f = subs(f, [Ixx Iyy Izz k l m b g], paramValues);      
f = simplify(f);                                        

% Group symbolic variables
state = [x y z phi theta psi vx vy vz p q r];
control = [input_1, input_2, input_3, input_4];

% Calculate linearization
A = jacobian(f,state);
B = jacobian(f,control);

f_StatesZero = subs(f, state, zeros(1,12));                       
[input_Eq1, input_Eq2, input_Eq3, input_Eq4] = solve(f_StatesZero == 0, control);     
input_Eq = double([input_Eq1 input_Eq2 input_Eq3 input_Eq4]);               
%Save the result in a mat file
save('Equilibrium inputs', 'input_Eq')

A_pos = double(subs(A, [state,control],[zeros(1,12),input_Eq]));
B_pos = double(subs(B, [state,control],[zeros(1,12),input_Eq]));

% Isolating relevant states: x, y, z and psi
C_pos = zeros(4,12);
C_pos(1,1) = 1;
C_pos(2,2) = 1;
C_pos(3,3) = 1;
C_pos(4,6) = 1;

%%
Qx = linspace(0.00001, 0.0009, 10);
figure
hold on 

for i = 1:10
    Q_z = diag([Qx(i) 0.00003 0.1 0.1]); % diagonal matrix of gains
    Q_pos = C_pos'*Q_z*C_pos;        % 
    R_pos = eye(4);
    
    % Calculating discrete LQR
    Ts = 0.005;                                 % Sampling Time
    K_pos = lqrd(A_pos,B_pos,Q_pos,R_pos,Ts);   % Computing gains

    [EigVec, Eig] = eig(A_pos - B_pos*K_pos);
    plot(Eig(1,1),'ro')
    plot(Eig(2,2),'ro')
    plot(Eig(3,3),'bo')
    plot(Eig(4,4), 'bo')
    plot(Eig(5,5), 'ko')
    plot(Eig(6,6),'ko')
    plot(Eig(7,7),'go')
    plot(Eig(8,8), 'go')
    plot(Eig(9,9), 'mo')
    plot(Eig(10,10), 'mo')
    plot(Eig(11,11),'o', 'MarkerEdgeColor',[0.4940 0.1840 0.5560])
    plot(Eig(12,12),'o', 'MarkerEdgeColor',[0.4940 0.1840 0.5560])
    disp(EigVec)
end
grid on
xline(0,'LineWidth',2)
yline(0,'LineWidth',2)
title('Varying Qx')
a = legend("State 1", "State 2", "State 3", "State 4", "State 5", "State 6")
a.set('Interpreter','latex')
hold off

%%
Qy = linspace(0.00001, 0.0009, 100);
figure
hold on 

for i = 1:100
    Q_z = diag([0.00003 Qy(i) 0.1 0.1]); % diagonal matrix of gains
    Q_pos = C_pos'*Q_z*C_pos;        % 
    R_pos = eye(4);
    
    % Calculating discrete LQR
    Ts = 0.005;                                 % Sampling Time
    K_pos = lqrd(A_pos,B_pos,Q_pos,R_pos,Ts);   % Computing gains

    Eig = eig(A_pos - B_pos*K_pos);
    plot(Eig(1),'ro')
    plot(Eig(2),'ro')
    plot(Eig(3),'bo')
    plot(Eig(4), 'bo')
    plot(Eig(5), 'ko')
    plot(Eig(6),'ko')
    plot(Eig(7),'go')
    plot(Eig(8), 'go')
    plot(Eig(9), 'mo')
    plot(Eig(10), 'mo')
    plot(Eig(11),'o', 'MarkerEdgeColor',[0.4940 0.1840 0.5560])
    plot(Eig(12),'o', 'MarkerEdgeColor',[0.4940 0.1840 0.5560])


end
grid on
xline(0,'LineWidth',2)
yline(0,'LineWidth',2)
title('Varying Qy')
a = legend("State 1", "State 2", "State 3", "State 4", "State 5", "State 6")
a.set('Interpreter','latex')
hold off

%%
Qz = linspace(0.01, 0.1, 100);
figure
hold on 

for i = 1:100
    Q_z = diag([0.00003 0.00003 Qz(i) 0.1]); % diagonal matrix of gains
    Q_pos = C_pos'*Q_z*C_pos;        % 
    R_pos = eye(4);
    
    % Calculating discrete LQR
    Ts = 0.005;                                 % Sampling Time
    K_pos = lqrd(A_pos,B_pos,Q_pos,R_pos,Ts);   % Computing gains

    Eig = eig(A_pos - B_pos*K_pos);
    plot(Eig(1),'ro')
    plot(Eig(2),'ro')
    plot(Eig(3),'bo')
    plot(Eig(4), 'bo')
    plot(Eig(5), 'ko')
    plot(Eig(6),'ko')
    plot(Eig(7),'go')
    plot(Eig(8), 'go')
    plot(Eig(9), 'mo')
    plot(Eig(10), 'mo')
    plot(Eig(11),'o', 'MarkerEdgeColor',[0.4940 0.1840 0.5560])
    plot(Eig(12),'o', 'MarkerEdgeColor',[0.4940 0.1840 0.5560])


end
grid on
xline(0,'LineWidth',2)
yline(0,'LineWidth',2)
title('Varying Qz')
a = legend("State 1", "State 2", "State 3", "State 4", "State 5", "State 6")
a.set('Interpreter','latex')
hold off


%%
Qpsi = linspace(0.01, 0.1, 100);
figure
hold on 

for i = 1:100
    Q_z = diag([0.00003 0.00003 0.1 Qpsi(i)]); % diagonal matrix of gains
    Q_pos = C_pos'*Q_z*C_pos;        % 
    R_pos = eye(4);
    
    % Calculating discrete LQR
    Ts = 0.005;                                 % Sampling Time
    K_pos = lqrd(A_pos,B_pos,Q_pos,R_pos,Ts);   % Computing gains

    Eig = eig(A_pos - B_pos*K_pos);
    plot(Eig(1),'ro')
    plot(Eig(2),'ro')
    plot(Eig(3),'bo')
    plot(Eig(4), 'bo')
    plot(Eig(5), 'ko')
    plot(Eig(6),'ko')
    plot(Eig(7),'go')
    plot(Eig(8), 'go')
    plot(Eig(9), 'mo')
    plot(Eig(10), 'mo')
    plot(Eig(11),'o', 'MarkerEdgeColor',[0.4940 0.1840 0.5560])
    plot(Eig(12),'o', 'MarkerEdgeColor',[0.4940 0.1840 0.5560])


end
grid on
xline(0,'LineWidth',2)
yline(0,'LineWidth',2)
title('Varying Qpsi')
a = legend("State 1", "State 2", "State 3", "State 4", "State 5", "State 6")
a.set('Interpreter','latex')
hold off

%%
% R = linspace(0.1, 10, 100);
% figure
% hold on 
% 
% for i = 1:100
%     Q_z = diag([0.00003 0.00003 0.1 0.1]); % diagonal matrix of gains
%     Q_pos = C_pos'*Q_z*C_pos;        % 
%     R_pos = R(i)*eye(4);
% 
%     % Calculating discrete LQR
%     Ts = 0.005;                                 % Sampling Time
%     K_pos = lqrd(A_pos,B_pos,Q_pos,R_pos,Ts);   % Computing gains
% 
%     Eig = eig(A_pos - B_pos*K_pos);
%     plot(Eig(1),'ro')
%     plot(Eig(2),'ro')
%     plot(Eig(3),'bo')
%     plot(Eig(4), 'bo')
%     plot(Eig(5), 'ko')
%     plot(Eig(6),'ko')
%     plot(Eig(7),'go')
%     plot(Eig(8), 'go')
%     plot(Eig(9), 'mo')
%     plot(Eig(10), 'mo')
%     plot(Eig(11),'o', 'MarkerEdgeColor',[0.4940 0.1840 0.5560])
%     plot(Eig(12),'o', 'MarkerEdgeColor',[0.4940 0.1840 0.5560])
% 
% 
% end
% grid on
% xline(0,'LineWidth',2)
% yline(0,'LineWidth',2)
% title('Varying R')
% a = legend("State 1", "State 2", "State 3", "State 4", "State 5", "State 6")
% a.set('Interpreter','latex')
% hold off


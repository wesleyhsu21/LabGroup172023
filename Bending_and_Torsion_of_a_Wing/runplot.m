clear
clc

%% 1) Loading front spar---------------------------

P1 =[0 10].*4.448; % load in pounds converted to newtons, might need to change during lab because not exact
L = (17.4 + 286.66)/1000; % distance between front and rear spar
theta = 45; % angle between strain gauge


% 1.1) strain front spar C,D,E
gx_fs1  = [0 4.274]; 
gn_fs1 = [0 0.064];
gy_fs1 = [0 -3.955];

%Shear strain front spar
gxy_fs1 = (gn_fs1 - gx_fs1.*cosd(theta)^2 - gy_fs1.*sind(theta)^2)/(sind(theta)*cosd(theta)); 

% 1.2) strain upper surface F,G,H
gx_u2  = [0 -4.083]; 
gn_u2 = [0 -11.419];
gy_u2 = [0 -9.888];

%Shear strain Upper
gxy_u1 = (gn_u2 - gx_u2.*cosd(theta)^2 - gy_u2.*sind(theta)^2)/(sind(theta)*cosd(theta)); 

% 1.3) strain lower surface I,J,K
gx_l2  = [0 10.080]; 
gn_l2 = [0 20.797];
gy_l2 = [0 5.869];

%Shear strain Lower
gxy_l1 = (gn_l2 - gx_l2.*cosd(theta)^2 - gy_l2.*sind(theta)^2)/(sind(theta)*cosd(theta)); 

figure
hold on
plot(gxy_fs1,P1,'r-x',LineWidth=1.5)
plot(gxy_u1,P1,'b-x',LineWidth=1.5)
plot(gxy_l1,P1,'g-x',LineWidth=1.5)
hold off
xlabel('Shear Strain(10^{-6})')
ylabel('P1 (N)')
legend('Front Spar','Upper','Lower')


%% 2)  Loading rear spar -------------------------------

P2 =[].*4.448; % load in pounds converted to newtons, might need to change during lab because not exact

% 2.1) strain front spar 
gn_fs2  = []; 
gx_fs2 = [];
gy_fs2 = [];

%Shear strain front spar
gxy_fs2 = (gn_fs2 - gx_fs2.*cosd(theta)^2 - gy_fs2.*sind(theta)^2)/(sind(theta)*cosd(theta)); 

% 2.2) strain upper surface
gn_u2  = []; 
gx_u2 = [];
gy_u2 = [];

%Shear strain Upper
gxy_u2 = (gn_u2 - gx_u2.*cosd(theta)^2 - gy_u2.*sind(theta)^2)/(sind(theta)*cosd(theta)); 

% 2.3) strain lower surface
gn_l2  = []; 
gx_l2 = [];
gy_l2 = [];

%Shear strain Lower
gxy_l2 = (gn_l2 - gx_l2.*cosd(theta)^2 - gy_l2.*sind(theta)^2)/(sind(theta)*cosd(theta)); 

figure
hold on
plot(gxy_fs2,P2,'r-x',LineWidth=1.5)
plot(gxy_u2,P2,'b-x',LineWidth=1.5)
plot(gxy_l2,P2,'g-x',LineWidth=1.5)
hold off
xlabel('Shear Strain(10^{-6})')
ylabel('P2 (N)')
legend('Front Spar','Upper','Lower')


%% Shear strain due to Torque(Superposition) at each strain gauge positin

gxy_fs = gxy_fs2 - gxy_fs1; % Front spar
gxy_u = gxy_u2 - gxy_u1; % Upper surface
gxy_l = gxy_l2 - gxy_l1; % Lower surface

figure
plot(gxy_fs,P1.*L,'r',LineStyle=1.5)
xlabel('Shear Strain')
ylabel('Torque(Nm)')
legend('Front Spar')

figure
plot(gxy_u,P1.*L,'b',LineStyle=1.5)
xlabel('Shear Strain')
ylabel('Torque(Nm)')
legend('Upper Surface')

figure
plot(gxy_l,P1.*L,'g',LineStyle=1.5)
xlabel('Shear Strain')
ylabel('Torque(Nm)')
legend('Lower Surface')

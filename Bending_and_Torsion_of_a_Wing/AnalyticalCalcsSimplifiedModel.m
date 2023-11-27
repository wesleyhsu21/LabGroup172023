clear
clc

A1 = 60*2 + (pi*40^2)/2;
A2 = 200*80;
G = 73e3;

syms q1 q2;

dtdz1 = 1./(2*G*A1).*(q1./0.8*(pi*40+2*60) + (q1 - q2)./2*80);
dtdz2 = 1./(2*G*A2).*(q2./0.8*400 + q2./1.6*80 + (q2-q1)./2*80);

Torque = 1; %unit torque
eqn1 = 2*A1.*q1 + 2*A2.*q2 == Torque; 
eqn2 = dtdz1 - dtdz2 == 0;

[A,B] = equationsToMatrix([eqn1, eqn2], [q1, q2]);

Q = double(linsolve(A,B));


g18e = Q(1)/G/0.64;
g18i = (Q(1) - Q(2))/G/1.7;

g12 = Q(2)/G/2.34;
g23 = Q(2)/G/0.64;
g36 = Q(2)/G/1.59;
g76 = g23;
g87 = g12;

max_T = 222.4*0.30406*1000; %max torque from 50lbs loading
%Torque vs shear strain theoretical plots

figure(1) %%UPPER Surface
plot([0 max_T],[0 g23*max_T],LineWidth=1.5)
legend('Torque vs Shear Strain (Upper Surface)')
ylabel('Shear Strain')
xlabel('Torque PL (Nmm)')

figure(2) %Lower surface
plot([0 max_T],[0 g76*max_T],LineWidth=1.5)
legend('Torque vs Shear Strain (Lower Surface)')
ylabel('Shear Strain')
xlabel('Torque PL (Nmm)')

figure(3) %1-8 front spar wall
plot([0 max_T],[0 g18i*max_T],LineWidth=1.5)
legend('Torque vs Shear Strain (side 1-8) Front Spar')
ylabel('Shear Strain')
xlabel('Torque PL (Nmm)')
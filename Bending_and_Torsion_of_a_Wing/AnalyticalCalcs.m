A1 = 8478;
A2 = 24628;
G = 28000;

syms q1 q2;

dtdz1 = 1./(2*G*A1).*(q1./0.64*318 + (q1 - q2)./1.7*81);
dtdz2 = 1./(2*G*A2).*(q2./1.7*81 + q2./1.59*81 + q2./2.34*17.4*2 + q2./0.64*286.66*2 - q1./1.7*81);

Torque = 222.4*0.30406*1000; %torque due to max load 50 Nmm
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


%Torque vs shear strain theoretical plots

figure %%UPPER Surface

plot([0 Torque],[0 g23],'r',LineWidth=1.5)
%legend('Torque vs Shear Strain (Upper & Lower Surface)')
ylabel('Shear Strain')
xlabel('Torque PL (Nmm)')
hold on

%Lower surface
% figure(2)
% plot([0 Torque],[0 g76],'b-o',LineWidth=1.5)
% legend('Torque vs Shear Strain (Lower Surface)')
% ylabel('Shear Strain')
% xlabel('Torque PL (Nmm)')
 %1-8 front spar wall


% figure(3)
plot([0 Torque],[0 g18i],'b',LineWidth=1.5)
legend('Torque vs Shear Strain (Upper & Lower Surface)','Torque vs Shear Strain (side 1-8 front spar)')
ylabel('Shear Strain')
xlabel('Torque PL (Nmm)')

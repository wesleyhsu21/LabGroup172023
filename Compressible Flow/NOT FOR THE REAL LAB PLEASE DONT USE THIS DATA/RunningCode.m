close all
clc
clear

%% Enter Pressure and Temperature

runtime = '2022-11-21_09-28-01';
pe_inp = 1; % [Bar]
te = 273; % [K]
[x,h,t,p0,p,xt,ts,prf] = supersoniclab2023(runtime, pe_inp, te)

figure
plot(xt, prf(1,:),'r*--')
hold on 
plot(xt, prf(2,:),'g*--')
plot(xt, prf(3,:), 'b*--')

hold off

close all
clc
clear

%% Enter Pressure and Temperature

runtime = "";
pe_inp = 1; % [Bar]
te = 273; % [K]
[x,h,t,p0,p,xt,ts,prf] = supersoniclab2023(runtime, pe_inp, te)
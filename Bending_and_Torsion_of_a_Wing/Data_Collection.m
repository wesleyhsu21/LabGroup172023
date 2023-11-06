clear
clc

%3.1 Conversion of Strain Gauge Bridge Voltage to Strain
% use [epsilon] = strain(Vout, Vin, G)

%3.2 Determinatoin of the shear strain from the strain gauge rosette
%Use [epsilon_n] = straintransform(epsilon_x, epsilon_y, gamma_xy, theta)

function [epsilon] = strain(Vout, Vin, G)
%Function to calculate strain
%Inputs:    Vout    - Amplified output voltage relative to the value at zero load
%           Vin     - Input Voltage
%           G       - Amplifier gain
%Outputs:   epsilon - strain
S = 2.09; %Strain Gauge Factor, S
epsilon = (4*Vout)/(Vin * S * G);
end

function [epsilon_n] = straintransform(epsilon_x, epsilon_y, gamma_xy, theta)
%Function to transform strain in global axes to a direct stress
%Inputs:    epsilon_x   - Direct strain in the global x-direction
%           epsilon_y   - Direct strain in the global y-direction
%           gamma_xy    - Shear Strain in the local x-y-directions
%           theta       - Angle anticlockwise from x-axis in degrees
%Outputs:   epsilon_n   - Normal strain at angle theta from x-axis
epsilon_n = epsilon_x*(cosd(theta))^2 + epsilon_y*(sind(theta))^2 + gamma_xy*sind(theta)*cosd(theta);
end
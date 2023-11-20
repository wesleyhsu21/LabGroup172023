% PUT THIS FILE IN THE panel_code FOLER AND RUN
% ENSURE ALL FILEPATHS IN THIS CODE ARE CORRECT
% FIRST SECTION PRODUCES PLOTS FOR CONVERGENCE
% SECOND SECTION PRODUCES CL' VS AOA PLOT

% plots for convergence x3
% rms error in Cp plot

% in lab we will be testing the wing at 0, 4 and 13 deg

clear
clc
close all

counti = 0;

for i = 2:2:30 % max is 30
    counti = counti+1;
    countj = 0;
    for j = 2:2:20 % max is 20
        
        countj = countj + 1; % counts number of iterations
        
        % run the mesh generator
        inputs = fopen('geowinginputs.txt','w');
        fprintf(inputs,['n\r\n' num2str(i) '\r\n0.225\r\n0.6\r\n0.42\r\nsweep\r\n36.9\r\n0\r\n-15\r\n0\r\n' num2str(j)]);
        fclose(inputs);
        [~,cmdout] = system('geowing.exe < geowinginputs.txt');
        % file, cordwise disc, root chord, semi-span, taper, sweep, sweep_LE,
        % dihedral, twist, root incidence, spanwise res
        % ^ inputs to mesh generator

        % run the panel code - ensure stream.dat has correct values first 
        system('combo.exe');

        % recording Cp for red, yellow and green wing sections
        red0{counti,countj} = readmatrix('sect_001');
        yellow0{counti,countj} = readmatrix('sect_002');
        green0{counti,countj} = readmatrix('sect_003');
        span0{counti,countj} = readmatrix('span_load');
        
        % save chord and spanwise resolutions
        cwRes(counti,countj) = i;
        swRes(counti,countj) = j;

        cmdout(strfind(cmdout, '=')) = [];
        Key   = 'NUMBER OF PANELS';
        Index = strfind(cmdout, Key);
        if i == 30 && j == 20
            panels(counti,countj) = panels(counti,countj-1) + panels(counti-1,countj) - panels(counti-1,countj-1);
        elseif isempty(Index)
            panels(counti,countj) = 28 * i + 16 * (j-1);
        else
            panels(counti,countj) = sscanf(cmdout(Index(1) + length(Key):end), '%g', 1);
        end

        clc
    end
end

% Resize each Cp matrix by taking every xth value
refpts = length(red0{1,1});

for i = 1:size(red0,1)
    for j = 1:size(red0,2)
        for k = 1:refpts
            Cpred0{i,j}(k) = red0{i,j}(dsearchn(red0{i,j}(:,1),delaunayn(red0{i,j}(:,1)),red0{1,1}(k,1)));
        end
    end
end

% find RMS error in Cp
for i = 1:size(red0,1)
    for j = 1:size(red0,2)
        RMS(i,j) = sum(abs(Cpred0{end} - Cpred0{i,j}));
    end
end

% reshape resolution matrices and RMS into arrays for easier plotting
reshape(swRes.',1,[]);
reshape(cwRes.',1,[]);
reshape(RMS.',1,[]);
reshape(panels.',1,[]);

% plot resolutions with RMS error in Cp
figure(1)
surf(cwRes,swRes,RMS)
xlabel('Chordwise discretisation')
ylabel('Spanwise resolution')
zlabel('RMS error in C_p')
set (gca, 'xdir', 'default')

% plot resolutions with number of panels
figure(2)
surf(cwRes,swRes,panels)
xlabel('Chordwise discretisation')
ylabel('Spanwise resolution')
zlabel('No. panels')
set (gca, 'xdir', 'default')

%%
% i iterates through cordwise discretisation values
% j iterates through spanwise discretisation values
% can see that solution converges at cordwise disc = 26, spanwise res = 10

count = 0;

for i = 2:530
    for j = 2:5:20
        
        count = count + 1; % counts number of iterations
        
        % run the mesh generator
        inputs = fopen('geowinginputs.txt','w');
        fprintf(inputs,['n\r\n' num2str(i) '\r\n0.225\r\n0.6\r\n0.42\r\nsweep\r\n36.9\r\n0\r\n-15\r\n0\r\n' num2str(j)]);
        fclose(inputs);
        system('geowing.exe < geowinginputs.txt');
        % file, cordwise disc, root chord, semi-span, taper, sweep, sweep_LE,
        % dihedral, twist, root incidence, spanwise res
        % ^ inputs to mesh generator

        % run the panel code - ensure stream.dat has correct values first 
        system('combo.exe');

        % recording Cp for red, yellow and green wing sections
        red0 = readmatrix('sect_001');
        yellow0 = readmatrix('sect_002');
        green0 = readmatrix('sect_003');
        span0 = readmatrix('span_load');        
        
        % finding CL' for each wing section
        CLdRed(count) = trapz(red0(:,1),red0(:,2));
        CLdYellow(count) = trapz(yellow0(:,1),yellow0(:,2));
        CLdGreen(count) = trapz(green0(:,1),green0(:,2));
        
        clc

    end
end

% plot convergence
figure(1)
plot(1:count,CLdRed(1,:),'r',LineWidth=2)
hold on
plot(1:count,CLdYellow(1,:),Color='#fcba03',LineWidth=2)
plot(1:count,CLdGreen(1,:),'b',LineWidth=2)
legend('Red section','Yellow section','Green section',Location='best')
xlabel('Iteration',FontSize=14)
ylabel("C_L'",FontSize=14)


%%

% loop to find CL' at each angle of attack for all 3 wing sections
for i = 0:16
    % load matrices from the correct files
    filepath = ['C:\Users\mlawl\Downloads\Lab_Files\Lab_Files\output_data\deg' num2str(i)];
    red = readmatrix([filepath '\sect_001'] );
    yellow = readmatrix([filepath '\sect_002'] );
    green = readmatrix([filepath '\sect_003'] );
    
    % calculate CL' for all 3 wing section
    CLd(1,i+1) = trapz((red(:,1)),abs(red(:,2)));
    CLd(2,i+1) = trapz((yellow(:,1)),abs(yellow(:,2)));
    CLd(3,i+1) = trapz((green(:,1)),abs(green(:,2)));
        
end

% plot CL' vs angle of attack
figure(2)
plot(0:16,CLd(1,:),'r',LineWidth=2)
hold on
plot(0:16,CLd(2,:),Color='#fcba03',LineWidth=2)
plot(0:16,CLd(3,:),'b',LineWidth=2)
legend('Red section','Yellow section','Green section',Location='best')
xlabel('\alpha',FontSize=14)
ylabel("C_L'",FontSize=14)


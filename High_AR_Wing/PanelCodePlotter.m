% PUT THIS FILE IN THE panel_code FOLER AND RUN
% ENSURE ALL FILEPATHS IN THIS CODE ARE CORRECT
% FIRST SECTION PRODUCES PLOTS FOR CONVERGENCE
% SECOND SECTION PRODUCES CL' VS AOA PLOT

% plots for convergence x3
% rms error in Cp plot

% in lab we will be testing the wing at 0, 4 and 13 deg

% i iterates through cordwise discretisation values
% j iterates through spanwise discretisation values
% can see that solution converges at cordwise disc = 26, spanwise res = 10

clear
clc
close all

tic

counti = 0;

for i = 2:2:30 % max is 30
    counti = counti+1;
    countj = 0;
    for j = 2:2:20 % max is 20
        
        countj = countj + 1; % counts number of iterations
        
        %if i > 20 && j > 12
        if i*j*5 > 1200
            cwRes(counti,countj) = NaN;
            swRes(counti,countj) = NaN;
            continue
        end
        
        % run the mesh generator
        inputs = fopen('geowinginputs.txt','w');
        fprintf(inputs,['n\r\n' num2str(i) '\r\n0.225\r\n0.6\r\n0.42\r\nsweep\r\n36.9\r\n0\r\n-1.5\r\n0\r\n' num2str(j)]);
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
        panels(counti,countj) = sscanf(cmdout(Index(1) + length(Key):end), '%g', 1);
        
        % calculate CL' for all 3 wing section
        if i > 2 && j > 2
        CLdRed(counti,countj) = trapz((red0{counti,countj}(1:length(red0{counti,countj})/2,1)),abs(red0{counti,countj}(1:length(red0{counti,countj})/2,2))) - trapz((red0{counti,countj}(length(red0{counti,countj})/2+1:end-1,1)),abs(red0{counti,countj}(1+length(red0{counti,countj})/2:end-1,2)));
        CLdYellow(counti,countj) = trapz((yellow0{counti,countj}(1:length(yellow0{counti,countj})/2,1)),abs(yellow0{counti,countj}(1:length(yellow0{counti,countj})/2,2))) - trapz((yellow0{counti,countj}(length(yellow0{counti,countj})/2+1:end-1,1)),abs(yellow0{counti,countj}(1+length(yellow0{counti,countj})/2:end-1,2)));
        CLdRed(counti,countj) = trapz((green0{counti,countj}(1:length(green0{counti,countj})/2,1)),abs(green0{counti,countj}(1:length(green0{counti,countj})/2,2))) - trapz((green0{counti,countj}(length(green0{counti,countj})/2+1:end-1,1)),abs(green0{counti,countj}(1+length(green0{counti,countj})/2:end-1,2))); 
        end

        clc
    end
end

% Resize each Cp matrix by taking every xth value
refpts = length(red0{1,1});

% for i = 1:size(red0,1)
%     for j = 1:size(red0,2)
%         for k = 1:refpts
%             %Cpred0{i,j}(k) = red0{i,j}(dsearchn(red0{i,j}(:,1),delaunayn(red0{i,j}(:,1)),red0{1,1}(k,1)));
%             [~,Index] = min(abs(red0{1,1}(k) - red0{i,j}(:,1)));
%             Cpred0{i,j}(k) = red0{i,j}(Index,2);
%         end
%     end
% end
% 
% % find RMS error in Cp
% for i = 1:size(red0,1)
%     for j = 1:size(red0,2)
%         RMS(i,j) = sum(abs(Cpred0{end} - Cpred0{i,j}));
%     end
% end

% [~,comparisonpt] = min(abs(red0{1,1}(1) - red0{end,end}(:,1)));
% 
% for i = 1:size(red0,1)
%     for j = 1:size(red0,2)
%             [~,Index] = min(abs(red0{1,1}(1) - red0{i,j}(:,1)));
%             %Cpred0{i,j}(k) = red0{i,j}(Index,2);
%             ErrRed(i,j) = abs(red0{i,j}(Index,2) - red0{end,end}(comparisonpt,2));
% 
%             [~,Index] = min(abs(yellow0{1,1}(1) - yellow0{i,j}(:,1)));
%             %Cpyellow0{i,j}(k) = yellow0{i,j}(Index,2);
%             ErrYellow(i,j) = abs(yellow0{i,j}(Index,2) - yellow0{end,end}(comparisonpt,2));
% 
%             [~,Index] = min(abs(green0{1,1}(1) - green0{i,j}(:,1)));
%             %Cpgreen0{i,j}(k) = green0{i,j}(Index,2);
%             ErrGreen(i,j) = abs(green0{i,j}(Index,2) - green0{end,end}(comparisonpt,2));
%     end
% end

% reshape resolution matrices and RMS into arrays for easier plotting
reshape(swRes.',1,[]);
reshape(cwRes.',1,[]);
reshape(CLdRed.',1,[]);
reshape(panels.',1,[]);

% CLdRed(~cellfun('isempty',CLdRed));
% swRes(~cellfun('isempty',CLdRed));
% cwRes(~cellfun('isempty',CLdRed));
% panels(~cellfun('isempty',CLdRed));

% plot resolutions with RMS error in Cp
figure(1)
surf(cwRes,swRes,CLdRed)
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

toc

%%

% loop to find CL' at each angle of attack for all 3 wing sections
for i = 0:16
    % load matrices from the correct files
    filepath = ['C:\Users\mlawl\Downloads\Lab_Files\Lab_Files\output_data\deg' num2str(i)];
    red = readmatrix([filepath '\sect_001'] );
    yellow = readmatrix([filepath '\sect_002'] );
    green = readmatrix([filepath '\sect_003'] );
    
    % calculate CL' for all 3 wing section
    CLd(1,i+1) = trapz((red(1:length(red)/2,1)),abs(red(1:length(red)/2,2))) - trapz((red(length(red)/2+1:end-1,1)),abs(red(1+length(red)/2:end-1,2)));
    CLd(2,i+1) = trapz((yellow(1:length(yellow)/2,1)),abs(yellow(1:length(yellow)/2,2))) - trapz((yellow(length(yellow)/2+1:end-1,1)),abs(yellow(1+length(yellow)/2:end-1,2)));
    CLd(3,i+1) = trapz((green(1:length(green)/2,1)),abs(green(1:length(green)/2,2))) - trapz((green(length(green)/2+1:end-1,1)),abs(green(1+length(green)/2:end-1,2))); 
end

% plot CL' vs angle of attack
figure(3)
plot(0:16,CLd(1,:),'r',LineWidth=2)
hold on
plot(0:16,CLd(2,:),Color='#fcba03',LineWidth=2)
plot(0:16,CLd(3,:),'b',LineWidth=2)
legend('Red section','Yellow section','Green section',Location='best')
xlabel('\alpha',FontSize=14)
ylabel("C_L'",FontSize=14)


clear 
clc
close all

TorsionMC = readmatrix("Data.xlsx","Sheet","Torsion MC");
figure
title('Mesh Convergence, Pure Torsion')
hold on 
plot(TorsionMC(:,1),TorsionMC(:,2))
plot(TorsionMC(:,1),TorsionMC(:,5))
plot(TorsionMC(:,1),TorsionMC(:,8))
plot(TorsionMC(:,1),TorsionMC(:,11))
plot(TorsionMC(:,1),TorsionMC(:,14))
plot(TorsionMC(:,1),TorsionMC(:,17))
plot(TorsionMC(:,1),TorsionMC(:,20))
hold off
legend('322 Elements', '924 Elements', '4392 Elements', '7584 Elements', '16560 Elements', '64800 Elements', '182880 Elements','Location','south')
xlabel('Z Distance (mm)')
ylabel('Top Surface, Strain E12, \times T')


numele = [322, 924, 4392, 7584, 16560, 64800, 182880];
maxstrains = [max(TorsionMC(:,2)), max(TorsionMC(:,5)), max(TorsionMC(:,8)), max(TorsionMC(:,11)), max(TorsionMC(:,14)), max(TorsionMC(:,17)), max(TorsionMC(:,20))];
figure
plot(numele, maxstrains,'ro-')
title('Mesh Convergence, Pure Torsion')
xlabel('Number of Elements')
ylabel('Maximum Upper Surface Strain, E12, \times T')


BendingMC = readmatrix("Data.xlsx","Sheet","Bending MC");
figure
title('Mesh Convergence, Bending')
hold on 
plot(BendingMC(:,1),BendingMC(:,2))
plot(BendingMC(:,1),BendingMC(:,5))
plot(BendingMC(:,1),BendingMC(:,8))
plot(BendingMC(:,1),BendingMC(:,11))
plot(BendingMC(:,1),BendingMC(:,14))
plot(BendingMC(:,1),BendingMC(:,17))
plot(BendingMC(:,1),BendingMC(:,20))
hold off
legend('322 Elements', '924 Elements', '4392 Elements', '7584 Elements', '16560 Elements', '64800 Elements', '182880 Elements','Location','southeast')
xlabel('Z Distance (mm)')
ylabel('Top Surface, Displacement U2, \times F')


numele = [322, 924, 4392, 7584, 16560, 64800, 182880];
maxstrains = [max(BendingMC(:,2)), max(BendingMC(:,5)), max(BendingMC(:,8)), max(BendingMC(:,11)), max(BendingMC(:,14)), max(BendingMC(:,17)), max(BendingMC(:,20))];
figure
plot(numele, maxstrains,'ro-')
title('Mesh Convergence, Bending')
xlabel('Number of Elements')
ylabel('Maximum Upper Surface Displacement, U2, \times F')


%Algoritmo de Retropropagación

clc
clear all
p= [275 261 189 567 395 183 168 151 270 186 269 191 81 81;
    640 711 506 800 609 526 586 420 683 476 265 589 75 88;
    640 716 523 742 592 504 634 466 590 425 86 565 259 240; 
    432 499 517 280 270 176 302 190 183 149 75 117 420 75;
    373 339 268 812 565 420 297 294 674 657 388 108 217 107;
    764 764 749 810 795 687 671 666 720 712 588 487 417 350;
    710 707 777 680 701 613 628 650 601 623 416 297 527 456;
    464 518 779 262 285 361 583 567 280 275 211 80 617 82; 
    275 243 198 577 427 188 142 163 185 184 280 65 65 85;
    648 617 732 640 728 586 479 595 545 677 322 228 76 529;
    678 636 862 613 709 616 575 711 526 663 129 120 293 664;
    517 542 856 326 378 262 287 454 218 263 110 110 614 289]; %Entrada 2 bd


 t=[ 1 1 1 1 1 0 0 0 0 0 0 0 0 0; % CUADRADO
     0 0 0 0 0 1 1 1 1 1 0 0 0 0; % CIRCULO
     0 0 0 0 0 0 0 0 0 0 1 1 1 1]; % TRIANGULO
 
% entrenamiento con retropropagacion
%[2 1] valores maximos y minimo de la entrada y numero de neuronas
% en la primer capa y segunda capa y funciones de activación
% una de sus capas
 
net=newff(minmax(p),[12 3],{'tansig','purelin'},'traincgf');
net=init(net);
net.trainParam.epochs = 501 ; %numero de epocas maximas que se van a entrenar
net.trainParam.goal=1e-6; % error que establecemos muy pequeños
net=train(net,p,t);     % entradas y salidas
a=sim(net,p)            % resultado
pesos1=net.iw{1,1}      %pesos de la primera capa
bias1=net.b{1,1}        %bia de la primera capa
peso2=net.lw{2,1}       % peso de la segunda capa
bias2=net.b{2,1}        % bia de la segunda capa

    




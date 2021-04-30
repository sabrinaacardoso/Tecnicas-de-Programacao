// Arquivo de funções
#include "Lab08.h"

Relogio :: Relogio( ){
    hora = 0;
    minuto = 0;
    segundo = 0;
}

void Relogio :: setHora (int hr, int min, int seg){
    hora = (hr >= 0 &&  hr < 24) ? hr:0;
    minuto = (min >= 0 && min < 60) ? min:0;
    segundo = (seg >= 0 && seg < 60) ? seg:0;
}

void Relogio :: getHora(int h, int m, int s){
    this -> hora = h;
    this -> minuto = m;
    this -> segundo = s;
}

void Relogio :: avancar( ){
    segundo += 1;
        if (segundo >= 60){
            segundo = 0;
            minuto += 1;
        }
        if (minuto >= 60){
            minuto = 0;
            hora += 1;       
        }
        if (hora >= 24){
            hora = 0;
            minuto = 0;
            segundo = 0;
        }
}

void Relogio :: imprime ( ){
    cout << hora << "h " << minuto << "min " << segundo << "s " <<endl;
}
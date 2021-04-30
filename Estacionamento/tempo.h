//Arquivo cabeçalho tempo.h
#ifndef TEMPO_H
#define TEMPO_H

#include <cmath>

class Tempo { 
        //Declaração dos atributos
        int hora, minuto, segundo;

    public:
        //Declaração dos métodos
        Tempo(); //Construtor
        void setHorario(int, int, int);
        int totalSegundos(); //converte a hora, minuto e segundos em segundos
};
#endif
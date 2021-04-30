/* Disciplina: Técnicas de Programação.
   Unidade: 4
   Questão: Laboratório Virtual de Programação 08.
   Objetivo do programa: Simular um relógio */

   
//Arquivo cabeçalho
#ifndef LAB08_H
#define LAB08_H

#include <iostream>
#include <locale>

using namespace std;

class Relogio{
        int hora, minuto, segundo;

    public:
        Relogio( );
        void setHora (int, int, int);
        void getHora(int, int, int);
        void avancar( );
        void imprime( );
};
#endif
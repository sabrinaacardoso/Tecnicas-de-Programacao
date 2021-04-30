/* Disciplina: Técnicas de Programação.
   Unidade: 4
   Questão: Laboratório Virtual de Programação 07.
   Objetivo do programa: Multiplicar e dividir duas frações */

//Arquivo cabeçalho
#ifndef LAB07_H
#define LAB07_H

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

class Fracao{
        //Declaração das variáveis
        int numerador, denominador;

    public:
        //Declaração dos métodos
        Fracao(); //construtor sem parametro
        void setFracao(int, int);
        void Multiplica(Fracao, Fracao);
        void Divide (Fracao, Fracao);
        void imprimeFracao( );
        void imprimeFloat( );
};
#endif
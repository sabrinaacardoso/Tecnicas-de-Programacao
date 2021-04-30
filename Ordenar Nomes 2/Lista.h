/* Disciplina: Técnicas de Programação.
   Unidade: 6
   Questão: Laboratório Virtual de Programação 13.
   Objetivo do programa: Ordenar uma lista de nomes*/

//arquivo cabeçalho
#ifndef LISTA_H
#define LISTA_H

#include <string>

using namespace std;

class Lista{
        //Declaração das variáveis
        string *nomes;
        int tamanho, t;

    public:
        //Declaração dos métodos
        Lista(int);
        void setNomes(string);
        void imprimeNomes( );
        void inserirNome(string);
        void imprimeOrdenada( );
        ~Lista( );
};
#endif
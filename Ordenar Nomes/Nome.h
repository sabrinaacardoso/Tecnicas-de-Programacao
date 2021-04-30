/* Disciplina: Técnicas de Programação.
   Unidade: 5
   Questão: Laboratório Virtual de Programação 11.
   Objetivo do programa: Ordenar nomes de um vetor */

//Arquivo cabeçalho

#ifndef NOME_H
#define NOME_H

#include <string>

using namespace std;

class Nome{
        //Declaração dos atributos
        string nome, cpf;

    public:
        //Declaração dos métodos
        Nome( );
        void setNome(string);
        string getNome( );
        void setCPF(string);
        string getCPF( );
        //void Ordenar( ); não funcionou
};
#endif
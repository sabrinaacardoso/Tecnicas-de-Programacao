//Arquivo Pessoa.h
/* Disciplina: Técnicas de Programação.
   Unidade: 7
   Questão: Laboratório Virtual de Programação 15.
   Objetivo do programa: Calcula valor do salário de um funcionario */

#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
        //Declaração das variávels
        string nome;
        string CPF;

   public:
        //Declaração dos métodos
        Pessoa(void);
        void setNome(string);
        void setCPF(string);
        void imprimeNomeCPF(void) const;
};
#endif
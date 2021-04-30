//Arquivo Usuario.h
/* Disciplina: Técnicas de Programação.
   Unidade: 7
   Questão: Laboratório Virtual de Programação 17.
   Objetivo do programa: Cadastro em um sistema de laboratorio */

#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>

using namespace std;

class Usuario{
    //Declaração das variáveis
    string nome, email;
    int idade;

  public:
    //Declaração dos métodos
    Usuario( ); //Construtor vazio
    Usuario(string, string, int); //Construtor com parametro
    string getNome( ) const;
    string getEmail ( ) const;
    int getIdade( ) const;
    void Print( ) const;
};

#endif
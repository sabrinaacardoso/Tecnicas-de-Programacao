//Arquivo professor.h
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Usuario.h"


class Professor : public Usuario{
    //Declaração das variaveis
    string departamento;
    int numSala;

  public:
    //Declaração dos métodos
    Professor( );
    Professor(string, string, int, string, int);
    string getDepartamento( ) const;
    int getNumSala( )const;
    void Print( ) const;
};
#endif
//arquivo aluno.h
#ifndef ALUNO_H
#define ALUNO_H

#include "Usuario.h"

class Aluno : public Usuario{
    //Declaração das variaveis
    string matricula, curso;

  public:
    //Declaração dos métodos
    Aluno( );
    Aluno(string, string, int, string, string);
    string getCurso( ) const;
    string getMatricula( )const;
    void Print( ) const;
};
#endif
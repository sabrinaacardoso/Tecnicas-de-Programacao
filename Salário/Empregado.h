//Arquivo Pessoa.cpp
#ifndef EMPREGADO_H
#define EMPREGADO_H
#include "Pessoa.h"

class Empregado : public Pessoa{
        //Declaração das variáveis
        int numeroSecao;
        float salarioBase, IR;

    public:
       //Declaração dos métodos.
       Empregado( );
       void setnumeroSecao(int);
       int getnumeroSecao( ) const;
       void setsalarioBase(float);
       float getsalarioBase( ) const;
       void setIR(float);
       float getIR( ) const;
       float calcularSalario( );
       void imprimeDados( );
};
#endif
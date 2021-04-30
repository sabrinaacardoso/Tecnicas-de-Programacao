//Arquivo novo.h
#ifndef NOVO_H
#define NOVO_H
#include <iomanip>
#include <iostream>
#include "Imovel.h"

class Novo : public Imovel{
        //Declaração da variável
        float porcentagem;
    public:
        //Declaração dos métodos
        Novo ( ); // construtor vazio
        Novo(Endereco, float,  float); // construtor com parâmetro
        void setPorcentagem (float);
        float getPorcentagem( ) const;
        void Imprime( );
};

#endif
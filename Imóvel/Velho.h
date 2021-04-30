//Arquivo Velho.h
#ifndef VELHO_H
#define VELHO_H
#include <iomanip>
#include <iostream>
#include "Imovel.h"

class Velho : public Imovel{
        //Declaração da variável
        float desconto;
    public:
        //Declaração dos métodos
        Velho ( ); // construtor vazio
        Velho(Endereco, float, float); // construtor com parâmetro
        void setDesconto (float);
        float getDesconto( ) const;
        void Imprime( );
};

#endif
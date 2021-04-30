/* Disciplina: Técnicas de Programação.
   Unidade: 7
   Questão: Laboratório Virtual de Programação 14.
   Objetivo do programa: calcular o valor de imóveis com base em porcentagens dadas para imoveis novos e imoveis velhos */

//Arquivo Imovel.h
#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

using namespace std;

//Struct para declarar rua e número.
struct Endereco{
    string rua;
    int numero;
};

class Imovel{
    protected:
        //Declaração das variáveis do tipo protected.
        Endereco endereco; 
        float preco;

    public:
        //Declaração dos métodos.
        Imovel( ); // construtor vazio
        Imovel(Endereco, float); //construtor com parâmetro
};

#endif
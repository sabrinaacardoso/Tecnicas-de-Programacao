//Arquivo Imovel.cpp
#include "Imovel.h"

//Construtor para inicializar as variaveis da struct Endereco com vazio e zero;
Imovel :: Imovel( ){
    endereco.rua = " ";
    endereco.numero = 0;
   
}

//Construtor para inicializar as variaveis endereco e preco;
Imovel :: Imovel(Endereco endereco, float preco){
    this -> endereco = endereco;
    this -> preco = preco > 0 ? preco:0;
}
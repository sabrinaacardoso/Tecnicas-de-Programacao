#include "Velho.h"

//Construtor para inicializar preco com 100.000,00 reais
Velho :: Velho ( ){
    preco = 100000.0;
}

//Construtor para inicializar o valor do desconto
Velho :: Velho (Endereco endereco, float preco, float desconto) : Imovel (endereco, preco){
    setDesconto(desconto);
} 

//Método para modificar a variavel desconto
void Velho :: setDesconto (float desconto){
    this -> desconto = desconto;
}

//Método para retornar o valor da variavel desconto
float Velho :: getDesconto( ) const{
    return desconto/100;
}

//Método para imprimir o valor do imovel velho
void Velho :: Imprime( ){
    float porcentagemVelho = preco * getDesconto( );
    float novo = preco - porcentagemVelho ;
    cout <<"O preço a ser cobrado por esse imóvel, com um desconto de R$" << fixed << setprecision(2) << porcentagemVelho << ", é R$" << novo;
}
//Arquivo novo.cpp
#include "Novo.h"

//Construtor para inicializar preco com 100.000,00 reais
Novo :: Novo ( ){
    preco = 100000.0;
}

//Construtor para inicializar o valor de porcentagem
Novo :: Novo (Endereco endereco, float preco, float porcentagem) : Imovel (endereco, preco) {
    setPorcentagem (porcentagem);
}

//Método para modificar a variavel porcentagem
void Novo :: setPorcentagem (float porcentagem){
    this -> porcentagem = porcentagem > 0 ? porcentagem : 0;
}

//Método para retornar o valor da variavel porcentagem
float Novo :: getPorcentagem( ) const{
    return porcentagem/100;
}

//Método para imprimir o valor do imovel novo
void Novo :: Imprime( ){
    float porcentagemNovo = preco * getPorcentagem( );
    float novo = porcentagemNovo + preco;
    cout <<"O preço a ser cobrado por esse imóvel, com um adicional de R$" << fixed << setprecision(2) << porcentagemNovo << " é R$" << novo;
}
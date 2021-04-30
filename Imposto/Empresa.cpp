#include "Empresa.h"
//Arquivo Empresa.h
//Construtor
Empresa :: Empresa (string nome, string CNPJ, float faturamento){
    setNome(nome);
    setCNPJ(CNPJ);
    setFaturamento(faturamento);
}

//método para modificar a variavel nome
void Empresa :: setNome(string nome){
    this -> nome = nome;
}

//método para retornar a variavel nome
string Empresa :: getNome( )const{
    return nome;
}

//método para modificar a variavel CNPJ
void Empresa :: setCNPJ(string CNPJ){
    this -> CNPJ = CNPJ;
}

//método para retornar a variavel CNPJ
string Empresa :: getCNPJ( )const{
    return CNPJ;
}

//método para modificar a variavel faturamento
void Empresa :: setFaturamento(float faturamento){
    this -> faturamento = faturamento;
}

//método para retornar a variavel faturamento
float Empresa :: getFaturamento( ) const{
    return faturamento;
}

float Empresa :: imposto = 0.17; //Inicialização da variavel estática

//método para retornar a variavel imposto
float Empresa :: getImposto( ) {
    return imposto;
}

//método para imprimir os valores
void Empresa :: Imprime( ){
    cout<<"Nome: "<<nome<<endl;
    cout<<"CNPJ: "<<CNPJ<<endl;
    cout<<"Faturamento: "<<faturamento<<endl;
    cout<<"Valor a pagar: R$ "<<imposto*faturamento<<endl;
}
//Arquivo Empresa Simples.h
#include "EmpresaS.h"

//Construtor inicializando o desconto com 70%
EmpresaS :: EmpresaS( ){
    desconto = 1 - 0.7;
}

//Construtor com parametro
EmpresaS :: EmpresaS(string nome, string CNPJ, float faturamento, float desconto) : Empresa (nome, CNPJ, faturamento){
    this -> desconto = desconto;
}

//Método para calcular o valor a pagar depois do desconto
float EmpresaS :: Calcula( ){
    return (getImposto()*desconto)*getFaturamento( );
}

//método para imprimir os valores
void EmpresaS :: Imprime( ){
    cout<<"Nome: "<<getNome( )<<endl;
    cout<<"CNPJ: "<<getCNPJ( )<<endl;
    cout<<"Faturamento: "<<getFaturamento( )<<endl;
    cout<<"Valor a pagar: R$ "<<Calcula( )<<endl;
    cout<<"A empresa esta cadastrada no SIMPLES!"<<endl;
}
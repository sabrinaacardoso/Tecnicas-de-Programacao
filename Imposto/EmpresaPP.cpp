#include "EmpresaPP.h"
//Arquivo Empresa Pequeno Porte.h

//Construtor inicializando o desconto com 50%
EmpresaPP :: EmpresaPP( ){
    desconto = 1 - 0.5;
}

//Construtor com parametro
EmpresaPP :: EmpresaPP(string nome, string CNPJ, float faturamento, float desconto) : Empresa (nome, CNPJ, faturamento){
    this->desconto=desconto;
}

//Método para calcular o valor a pagar depois do desconto
float EmpresaPP :: Calcula( ){
    return (getImposto()*desconto)*getFaturamento( );
}

//método para imprimir os valores
void EmpresaPP :: Imprime( ){
    cout<<"Nome: "<<getNome( )<<endl;
    cout<<"CNPJ: "<<getCNPJ( )<<endl;
    cout<<"Faturamento: "<<getFaturamento( )<<endl;
    cout<<"Valor a pagar: R$ "<<Calcula( )<<endl;
    cout<<"A empresa NAO esta cadastrada no SIMPLES!"<<endl;
}
//Arquivo Empregado.cpp
#include "Empregado.h"
#include <iomanip>

//Construtor;
Empregado :: Empregado( ){
    setnumeroSecao(numeroSecao);
    setIR(IR);
    salarioBase = 0.0;
}

//Método para modificar o valor da variavel numeroSecao
void Empregado :: setnumeroSecao (int numeroSecao){
    this -> numeroSecao = numeroSecao > 0 ? numeroSecao:0;
}

//Método para retornar o valor da variavel numeroSecao
int Empregado :: getnumeroSecao( ) const{
    return numeroSecao;
}

//Método para modificar o valor da variavel salarioBase
void Empregado :: setsalarioBase (float salarioBase){
    this -> salarioBase = salarioBase;
}

//Método para retornar o valor da variavel salarioBase
float Empregado :: getsalarioBase( ) const{
    return salarioBase;
}

//Método para modificar o valor da variavel IR
void Empregado :: setIR(float IR){
    this -> IR = IR>0 ? IR:0;
}

//Método para retornar o valor da variavel IR
float Empregado :: getIR( ) const{
    return IR/100;
}

//Método para calcular o valor do salário
float Empregado :: calcularSalario( ){
    return salarioBase - (salarioBase*getIR( ));
}

//Método para imprimir o valor do salário
void Empregado :: imprimeDados( ){
    cout<<"Dados do Empregado: "<<endl;
    Pessoa :: imprimeNomeCPF( );
    cout<<"Número da seção: " << getnumeroSecao( ) << endl;
    calcularSalario( );
    cout<<"Salário base: R$ "<< fixed << setprecision (2) << calcularSalario( ) << endl;
}

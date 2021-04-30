//Arquivo Pessoa.cpp
#include "Pessoa.h"

//Construtor para inicializar nome e cpf
Pessoa :: Pessoa( ){
    nome = " ";
    CPF = " ";
}

//Método para modificar o valor da variavel nome
void Pessoa :: setNome(string nome){
    this -> nome = nome;
}

//Método para modificar o valor da variavel CPF
void Pessoa :: setCPF(string CPF){
    this -> CPF = CPF;
}

//Imprimir os valores de nome e cpf
void Pessoa :: imprimeNomeCPF( ) const{ 
    cout<<"Nome: "<<nome<<endl;
    cout<<"CPF: "<<CPF<<endl;
}
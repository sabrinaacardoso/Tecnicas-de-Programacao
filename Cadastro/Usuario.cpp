//Arquivo Usuario.cpp
#include "Usuario.h"

//Construtor inicializando todas as variaveis com vazio 
Usuario :: Usuario( ){
    nome = " ";
    email = " ";
    idade = 0;
}

//Construtor com parametro
Usuario :: Usuario(string nome, string email, int idade){
    this -> nome = nome;
    this -> email = email;
    this -> idade = idade;
}

//Método para retornar a variavel nome
string Usuario :: getNome( ) const{
    return nome;
}

//Método para retornar a variavel email
string Usuario :: getEmail ( ) const{
    return email;
}

//Método para retornar a variavel idade
int Usuario :: getIdade( ) const{
    return idade;
}

//Método para imprimir os valores
void Usuario :: Print( ) const{
    cout<<"Nome do Usuário: "<<getNome( )<<endl;
    cout<<"Email: "<<getEmail( )<<endl;
    cout<<"Idade: "<<getIdade( )<<endl;
}
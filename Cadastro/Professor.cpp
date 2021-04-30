//Arquivo professor.cpp
#include "Professor.h"

//Construtor inicializando todas as variaveis com vazio 
Professor :: Professor( ){
    departamento = " ";
    numSala=0;
}

//Construtor com parametro
Professor :: Professor(string nome, string email, int idade, string departamento, int numSala) : Usuario (nome, email, idade){
    this -> departamento = departamento;
    this -> numSala = numSala;
}

//Método para retornar a variavel departamento
string Professor :: getDepartamento( ) const{
    return departamento;
}

//Método para retornar a variavel numSala
int Professor :: getNumSala( )const{
    return numSala;
}

//Método para imprimir os valores
void Professor :: Print( ) const{
    cout<<"DADOS DO PROFESSOR"<<endl;
    Usuario::Print( );
    cout<<"Departamento: "<<getDepartamento( )<<endl;
    cout<<"Numero da Sala: "<<getNumSala( )<<endl;
}
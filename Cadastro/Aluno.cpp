//Arquivo aluno.cpp
#include "Aluno.h"

//Construtor inicializando todas as variaveis com vazio 
Aluno :: Aluno( ){
    matricula = " ";
    curso = " ";
}

//Construtor com parametro
Aluno :: Aluno(string nome, string email, int idade, string matricula, string curso) : Usuario (nome, email, idade){
    this-> matricula = matricula;
    this-> curso = curso;
}

//Método para retornar a variavel curso
string Aluno :: getCurso( ) const{
    return curso;
}

//Método para retornar a variavel matricula
string Aluno :: getMatricula( )const{
    return matricula;
}

//Método para imprimir os valores
void Aluno :: Print( ) const{
    cout<<"DADOS DO ALUNO"<<endl<<endl;
    Usuario :: Print( );
    cout<<"Matricula: "<<getMatricula( )<<endl;
    cout<<"Curso: "<<getCurso( )<<endl;
}

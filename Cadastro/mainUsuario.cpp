#include "Usuario.cpp"
#include"Usuario.h"
#include "Aluno.cpp"
#include "Aluno.h"
#include "Professor.cpp"
#include "Professor.h"
 
#include <locale>

int main( ){
    setlocale(LC_ALL, "Portuguese");
    string nome, email, curso, matricula, departamento;
    int idade, nsala, op;
    
    cout<<"Bem vindo ao laboratorio!"<<endl;
    cout<<"Entre com:"<<endl;
    //Pede que o usuario entre com as informações gerais
    cout<<"Nome do Usuário: "<<endl;
    getline(cin, nome);
    cout<<"Email: "<<endl;
    cin>>email;
    cout<<"Idade: "<<endl;
    cin>>idade;
    //Pede que o usuario informe se é aluno ou professor
    cout<<"Digite: "<<endl;
    cout<<"1. Aluno"<<endl;
    cout<<"2. Professor"<<endl;
    cin>>op;

        //Se for aluno, pede matricula e curso
        if(op==1){
            cout<<"Matricula: "<<endl;
            cin>>matricula;
            cout<<"Curso: "<<endl;
            cin.ignore( );
            getline(cin, curso);
            Aluno aluno(nome, email, idade, matricula, curso); //passa todos os parametros para o construtor
            aluno.Print( );//Imprime as informações
        }
        //Se for professor, pede departamento e numero da sala
        else {
            cout<<"Departamento: "<<endl;
            cin.ignore( );
            getline(cin, departamento);
            cout<<"Numero da Sala: "<<endl;
            cin>>nsala;
            Professor professor(nome, email, idade, departamento, nsala);//passa todos os parametros para o construtor
            professor.Print( );//Imprime as informações
        }
    return 0;    
}
//Arquivo main.cpp
#include <cstring>
#include <iostream>
#include <locale>
#include "Nome.h"

int main ( ){
    setlocale(LC_ALL, "Portuguese");
    Nome n[50];//Variável do tipo Nome
    string nome, CPF;
    int i,j;

    //Inicia o programa
    cout<<"Olá, nesse programa você irá ordenar nomes de pessoas por ordem alfabética"<<endl;
    cout<<"------------------------------------------------------------------"<<endl

    //Pede que o usuário entre com a quantidade de pessoas
    cout<<"Quantas pessoas deseja cadastrar?"<<endl;
    cin>>j;
    cout<<"Digite o nome e CPF de "<< j <<" pessoas:"<<endl;

        for(i=0; i<j; i++){
            fflush(stdin);
            cin>>nome;
            cin>>CPF;

            //Modifica a variável nome
            n[i].setNome(nome);
            n[i].setCPF(CPF);            
        }

    //retorna os dados cadastrados
    cout<<"Dados do vetor:"<<endl;
        for(i=0; i<j; i++){
            cout<<"Nome: "<<n[i].getNome( );
            cout<<" CPF: "<<n[i].getCPF( )<<endl;
        }

    //não funcionou
    /*cout<<"Dados do vetor ordenados por nome: "<<endl;
        for(i=0; i<j; i++){
            //n[i].Ordenar( );
            cout<<"Nome: "<<n[i].getNome( );
            cout<<" CPF: "<<n[i].getCPF( )<<endl;
        }*/

    return 0;
}
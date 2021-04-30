#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

class Nome{
        char nome[10],cpf[15];

    public:
        Nome( );
        void setNome(char);
        char getNome( );
        void setCPF(char);
        char getCPF( );
};

Nome :: Nome( ){
    this -> cpf = " ";
    this -> nome=" ";
}

void Nome :: setNome(char nome){
    this -> nome = nome;
}

char Nome :: getNome( ){
    return nome;
}

void Nome :: setCPF(char cpf){
    this -> cpf = cpf;
}

char Nome :: getCPF( ){
    return cpf;
}

int main( ){
    Nome n[50];
    char nome[10], cpf[15];
    int i,j;
    cout<<"Quantas pessoas deseja cadastrar?"<<endl;
    cin>>j;
    cout<<"Digite o nome e CPF de "<< j <<" pessoas:"<<endl;
        for(i=0; i<j; i++){
            fflush(stdin);
            cin>>nome;
            cin>>CPF;

            n[i].setNome(nome);
            n[i].setCPF(CPF);            
        }
        cout<<"Dados do vetor:"<<endl;
        for(i=0; i<j; i++){
            cout<<"Nome: "<<n[i].getNome( );
            cout<<" CPF: "<<n[i].getCPF( )<<endl;
        }
    return 0;
}
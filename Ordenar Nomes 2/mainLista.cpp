//Arquivo main
#include <iostream>
#include <locale>
#include "Lista.h"
#include "Lista.cpp"


int main ( ){  
    string nomes;
    int i, qnt;

    cout<<"Digite o tamanho máximo da lista de nomes: "<<endl;
    cin>>qnt;
    Lista n(qnt);
    
    cout<<"Insira os nomes: "<<endl;
    for (i=0; i<5; i++){
    cin>>nomes;
    n.setNomes(nomes);
    }
    cout<<"Lista inserida: "<<endl;
    n.imprimeNomes( );

    cout<<"Lista Ordenado: "<<endl;
    n.imprimeOrdenada();
    n.imprimeNomes( );

    cout<<"Insira um nome: "; 
    cin>>nomes;
    n.setNomes(nomes);
    cout<<"Lista Ordenada:"<<endl;
    n.imprimeOrdenada();
    n.imprimeNomes( );

    return 0;
}   
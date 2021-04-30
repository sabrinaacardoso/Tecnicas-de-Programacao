#include "ContaDePoupanca.h"
#include "ContaDePoupanca.cpp"

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main( ){
    setlocale(LC_ALL, "Portuguese");
    ContaDePoupanca poupador1, poupador2; 
    float saldo1, saldo2, taxa;

    cout<<"Olá, nesse programa você irá calcular o rendimento mensal de duas contas poupanças!"<<endl;
    cout<<"------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"Para começar: "<<endl;

    //Pede para o usuário entrar com os valores do saldo em conta
    cout<<"Insira o valor a ser depositado do poupador 1:"<<endl;
    cin>>saldo1;
    poupador1.setSaldoDaPoupanca(saldo1);
    cout<<"Insira o valor a ser depositado do poupador 2:"<<endl;
    cin>>saldo2;
    poupador2.setSaldoDaPoupanca(saldo2);

    //Pede para o usuário entrar com o valor da taxa de juros
    cout<<"Informe a taxa de juros(%):"<<endl;
    cin>>taxa;
    ContaDePoupanca::modifiqueTaxaDeJuros(taxa); //Método estático

    //Retorna para o usuário o rendimento mensal das contas
    cout<<"O rendimento do poupador 1 é: R$"<<fixed<<setprecision(2)<<poupador1.calculeRendimentoMensal( )<<endl;
    cout<<"O rendimento do poupador 2 é: R$"<<fixed<<setprecision(2)<<poupador2.calculeRendimentoMensal( )<<endl;

    return 0;
}
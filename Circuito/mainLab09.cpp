//Arquivo main.cpp
#include <iostream>
#include <locale>
#include "Lab09.h"
#include "Lab09.cpp"

using namespace std;

int main ( ){
    setlocale(LC_ALL, "Portuguese");
    Circuito circuito [5]; //Declaração do vetor de 5 posições do tipo Circuito
    float R, I; // Resistencia, Corrente
    int v;
    cout<<"Nesse programa, você irá calcular a voltagem e a resistencia de 5 circuitos de uma só vez!"<<endl;
    cout<<"------------------------------------------------------------------------------------------"<<endl<<endl;
    //Pede ao usuário que entre com os valores
    cout <<"Para começar, entre com o valor das correntes e das resistencias dos 5 circuitos, respectivamente:"<<endl;

        for (v=0; v<5 ; v++){
            cin>>I;
            cin>>R;

            //Armazena os valores
            circuito[v].setCorrente(I);
            circuito[v].setResistencia(R);

            //Retorna os valores
            circuito[v].getCorrente( );
            circuito[v].getResistencia( );

            //Retorna ao usuários os valores calculados
            cout<< v + 1 <<": "<<endl;
            cout<<"voltagem: ";
            cout<<circuito[v].calcularVoltagem() << endl;
            cout<<"potência: ";
            cout<<circuito[v].calcularPotencia() << endl;
        }
    return 0;
}
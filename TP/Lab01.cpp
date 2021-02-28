/* Aluna: Sabrina Araújo Cardoso
   Matrícula: 118210114
   Disciplina: Técnicas de Programação.
   Unidade: 1
   Questão: Laboratório Virtual de Programação 01.
   Objetivo do programa: Calcular a distância entre dois pontos e dar resultado com precisão de duas casas decimais. */


#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
// Estrutura Ponto com variáveis inteiras.
struct Ponto {
    int x,y;
};

int main (){
    //Declaração de dois pontos (x1, y1) e (x2,y2)
    Ponto x1, y1, x2, y2;
    float distancia;

    //Abertura
    cout<<"Nesse programa, iremos calcular a distancia entre dois pontos"<<endl;

    //Dados de entrada do primeiro ponto
    cout<<"Entre com o primeiro ponto"<<endl;
    cin>>x1.x>>y1.y;

    //Dados de entrada do segundo ponto
    cout<<"Entre com o segundo ponto"<<endl;
    cin>>x2.x>>y2.y;

    //Calculo da distancia entre dois pontos: sqrt(x2-x1)²+(y2-y1)²
    distancia = sqrt((x2.x-x1.x)*(x2.x-x1.x) + (y2.y-y1.y)*(y2.y-y1.y)); 

    //Imprime o resultado da distância com precisão de duas casas decimais
    cout<<"Distancia: "<< fixed << setprecision(2) << distancia;
    return 0;
}
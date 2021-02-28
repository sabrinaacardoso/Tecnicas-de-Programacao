/* Aluna: Sabrina Araújo Cardoso
   Matrícula: 118210114
   Disciplina: Técnicas de Programação.
   Objetivo do programa: ler quantos lados tem um polígono e, posteriormente, 
                         calcular e mostrar a quantidade de diagonais diferentes que o polígono possui. */

#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int n;
    float nd;

    //Pede ao usuário os dados de entrada (quantidade de lados do poligono)
    cout<<"Entre com a quantidade de lados do poligono: "<<endl;
    cin>>n;

    //Fórmula para calcular a quantidade de diagonais diferentes que o polígono possui: nd=n(n-3)/2 
    nd = (n*(n-3))/2;

    //Imprime a quantidade de diagonais diferentes
    cout<<"A quantidade de diagonais diferentes que o poligono possui eh: "<<endl;
    cout<<fixed<<setprecision(1)<<nd; //Precisão de uma casa decimal 

    return 0;
}
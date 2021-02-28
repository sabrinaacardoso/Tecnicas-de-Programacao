/* Aluna: Sabrina Araújo Cardoso
   Matrícula: 118210114
   Disciplina: Técnicas de Programação.
   Objetivo do programa: ler dois números e calcular o resto da divisão do primeiro pelo segundo. */


#include <iostream>

using namespace std;

int main (){
    int num, den, resto;

    cout<<"Entre com o nominador e o denominador, respectivamente: "<<endl;
    cin>>num>>den;

    resto = num % den;

    cout<<"O resto da divisao eh igual a "<< resto << endl;

    return 0;
}

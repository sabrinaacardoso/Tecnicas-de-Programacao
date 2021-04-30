//Arquivo com especificação dos métodos da classe Fracao

#include "Lab07.h"

//Inicializando as variaveis com zero
Fracao :: Fracao (){
    numerador = 0;
    denominador = 0;
}

//Método para receber o valor das variáveis
void Fracao :: setFracao (int num, int den){
    this -> numerador = num;
    this -> denominador = den;   
}

//Método para multiplicar duas frações
void Fracao :: Multiplica (Fracao f1, Fracao f2){
    numerador = f1.numerador*f2.numerador;
    denominador = f1.denominador*f2.denominador;
}

//Método para dividir duas frações
void Fracao :: Divide (Fracao f1, Fracao f2){
    numerador = f1.numerador*f2.denominador;
    denominador = f2.numerador*f1.denominador; 
}

//Método para imprimir a fração resultante para o usuário no formato numerador/denominador
void Fracao :: imprimeFracao( ){
    cout << numerador << "/" << denominador << endl;
}

//Método para imprimir a fração resultante para o usuário no formato float
void Fracao :: imprimeFloat( ){

 float fr = numerador / (float) denominador;

 cout << fixed << setprecision (4) << fr <<endl;
}

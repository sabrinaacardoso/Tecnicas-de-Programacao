//Arquivo cpp com os métodos
#include "Lab09.h"

//Construtor para inicializar o valor da resistencia e da corrente com zero
Circuito :: Circuito( ){
    this -> resistencia = 0.0;
    this -> corrente = 0.0;
}

//Método para armazenar o valor da resistência
void Circuito :: setResistencia(float resistencia){
    this -> resistencia = resistencia;
}

//Método para retornar o valor da resistencia
float Circuito :: getResistencia( ){
    return resistencia;
}

//Método para armazenar o valor da corrente
void Circuito :: setCorrente(float corrente){
    this -> corrente = corrente;
}

//Método para retornar o valor da corrente
float Circuito :: getCorrente( ){
    return corrente;
}

//Método para calcular a voltagem usando a fórmula V = R.I
float Circuito :: calcularVoltagem( ){
    return (getResistencia() * getCorrente());
}

//Método para calcular a potencia usando a fórmula P = I.V
float Circuito :: calcularPotencia( ){
    return (getCorrente()*calcularVoltagem());
}
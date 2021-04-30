//Arquivo de métodos.cpp

#include "ContaDePoupanca.h"

//construtor inicializando com zero
ContaDePoupanca::ContaDePoupanca(float saldo){
    saldoDaPoupanca = saldo;
}

//Método para modificar o saldoDaPoupanca
void ContaDePoupanca::setSaldoDaPoupanca(float saldoDaPoupanca){ 
    this->saldoDaPoupanca = saldoDaPoupanca;
}

//Método para retornar o saldoDaPoupanca
float ContaDePoupanca::getSaldoDaPoupanca() const{
    return saldoDaPoupanca;
}

//Método para modificar o saldoDaPoupanca
void ContaDePoupanca :: modifiqueTaxaDeJuros(float taxa){
    taxaDeJurosAnual=taxa;
}

//Método para retornar o saldoDaPoupanca
float ContaDePoupanca :: getTaxaDeJurosAnual(){
    return taxaDeJurosAnual;
}

//Método para calcular o rendimento mensal : (saldoatual*taxadejuros/100)/12 + saldoatual;
float ContaDePoupanca::calculeRendimentoMensal(){
    return (((saldoDaPoupanca*taxaDeJurosAnual)/100)/12) + saldoDaPoupanca;
}

//Declaração da variável estática
float ContaDePoupanca :: taxaDeJurosAnual = 0;
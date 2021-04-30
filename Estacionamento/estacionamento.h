/* Disciplina: Técnicas de Programação.
   Unidade: 5
   Questão: Laboratório Virtual de Programação 10.
   Objetivo do programa: Calcular valor de estadia em um estacionamento */

   
//Arquivo cabeçalho estacionamento.h
#ifndef ESTACIONAMENTO_H
#define ESTACIONAMENTO_H

#include <string>
#include"tempo.h"

using namespace std;

class Estacionamento {
        //Declaração dos atributos
        string placa, modelo;
        Tempo horaEntrada, horaSaida;

   public:
        //Declaração dos métodos
        Estacionamento();//Construtor
        void setPlaca(string);
        void setModelo(string);
        string getPlaca();
        string getModelo();
        void horarioEntrada(int,int,int); //informa a hora que o veículo entrou
        void horarioSaida(int,int,int);  //informa a hora que o veículo saiu
        int calculaHora( ); //calcula o total de horas no estacionamento (*).
        float valorEstacionamento(); //calcula o valor a ser pago em função da
};
#endif
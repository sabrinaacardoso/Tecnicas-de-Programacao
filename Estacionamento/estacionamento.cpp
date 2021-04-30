//Arquivo estacionamento.cpp
#include "tempo.h"
#include "estacionamento.h"

//Construtor para inicializar atribulos com zero ou nulo
Estacionamento :: Estacionamento(){
    this -> placa = " ";
    this -> modelo = " ";
    horaEntrada.setHorario(0,0,0);
    horaSaida.setHorario(0,0,0);
}

//Método para receber o valor da placa
void Estacionamento :: setPlaca(string placa){
    this -> placa = placa;
}

//Método para receber o valor do modelo
void Estacionamento :: setModelo(string modelo){
    this -> modelo = modelo;
}

//Método para retornar o valor da placa
string Estacionamento :: getPlaca(){
    return placa;
}

//Método para retornar o valor do modelo
string Estacionamento :: getModelo(){
    return modelo;
}

//Método para receber o valor do horário de entrada
void Estacionamento :: horarioEntrada(int hora,int minuto,int segundo){
    horaEntrada.setHorario(hora, minuto, segundo);
}

//Método para receber o valor do horário de saida
void Estacionamento :: horarioSaida(int hora,int minuto,int segundo){
    horaSaida.setHorario(hora, minuto, segundo);
}

//Método para calcular o total de horas de estadia no estacionamento (hora de saida - hora de entrada / 3600)
int Estacionamento :: calculaHora( ){
    float horatotal= (horaSaida.totalSegundos( ) - horaEntrada.totalSegundos( ))/3600.0;
    return ceil(horatotal);
}

//Método para calcular o valor do estacionamento
float Estacionamento ::  valorEstacionamento(){
    return (calculaHora( )*1.5);
}
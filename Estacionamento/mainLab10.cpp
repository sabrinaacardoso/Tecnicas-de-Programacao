//Arquivo main.cpp
#include <iostream>
#include <locale>
#include <iomanip>

#include "estacionamento.h"
#include "tempo.h"
#include "estacionamento.cpp"
#include "tempo.cpp"

int main ( ){
    setlocale (LC_ALL, "Portuguese");
    Estacionamento estacionamento; //Variável do tupo Estacionamento
    string placa, modelo;
    Tempo tempo; //Variável do tipo Tempo
    int hr1, min1, seg1, hr2, min2, seg2;

    cout<<"Olá, nesse programa você irá calcular o tempo de estadia de um carro em um estacionamento,";
    cout<<" bem como o valor a ser pago pelo estacionamento." << endl;
    cout<<"-------------------------------------------------------------------------------------------------"<<endl<<endl;

    //Pede para o usuário entrar com as informações   
    cout<<"Para começar: "<<endl;
    cout <<"Entre com a placa do carro: ";
    cin>>placa;
    estacionamento.setPlaca(placa);
    cout<<"Entre com o modelo do carro: ";
    cin>>modelo;
    estacionamento.setModelo(modelo);
    cout<<"Entre com o horário de entrada: ";
    cin >> hr1 >> min1 >>seg1;
    tempo.setHorario(hr1, min1, seg1);
    cout<<"Entre com o horário de saida: ";
    cin >> hr2 >> min2 >>seg2;
    tempo.setHorario(hr2, min2, seg2);

    //Retorna para o usuário as informações sobre o carro
    cout <<"Placa: " << estacionamento.getPlaca( ) << endl;
    cout <<"Modelo: " << estacionamento.getModelo( ) << endl;

    estacionamento.horarioEntrada(hr1, min1, seg1);
    estacionamento.horarioSaida(hr2, min2, seg2);
    
    //Retorna para o usuário as informações sobre o estacionamento e o valor a ser pago
    cout<<"Horas ocupadas: " <<estacionamento.calculaHora( ) << "h" << endl;
    cout<<"Valor a ser pago: "<< fixed << setprecision (2) << estacionamento.valorEstacionamento( ) << "R$" <<endl;

    return 0;
}
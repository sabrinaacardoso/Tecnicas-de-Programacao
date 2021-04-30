//Arquivo tempo.cpp
#include "tempo.h"

//Construtor para inicializar atribulos com zero
Tempo :: Tempo(){
    this -> hora = 0;
    this -> minuto = 0;
    this -> segundo = 0;
}

//Método para receber o valor dos atributos
void Tempo :: setHorario(int hora, int minuto, int segundo){
    this -> hora = hora;
    this -> minuto = minuto;
    this -> segundo = segundo;
}

//Método para converter hora e minuto em segundo
int Tempo :: totalSegundos(){
   int horario;
   horario = (hora*3600) + (minuto*60) + segundo;   
   return horario;
}
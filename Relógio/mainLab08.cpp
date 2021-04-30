// Arquivo main

#include "Lab08.h"
#include "Lab08.cpp"

int main ( ){
   Relogio relogio;
   int hora, minuto, segundo;

    cout <<"entre com o horario desejado: "<< endl;
    cin >> hora >> minuto >> segundo;

    relogio.setHora(hora, minuto, segundo);
    relogio.getHora(hora, minuto, segundo);
    
    relogio.avancar();
    relogio.avancar();
    relogio.avancar();
    cout<<"Horario avancado: ";
    relogio.imprime(); 
    
    return 0;
}
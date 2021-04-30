/* Disciplina: Técnicas de Programação.
   Unidade: 5
   Questão: Laboratório Virtual de Programação 09.
   Objetivo do programa: Calcular voltagem e potencia de circuitos */

//Arquivo cabeçalho

#ifndef LAB09_H
#define LAB09_H

class Circuito {
    private:
        //Declaração dos atributos
        float resistencia, corrente;

    public:
        //Declaração dos métodos
        Circuito ( ); //construtor simples
        void setResistencia(float);
        float getResistencia( );
        void setCorrente(float);
        float getCorrente( );
        float calcularVoltagem( );
        float calcularPotencia( );
};

#endif
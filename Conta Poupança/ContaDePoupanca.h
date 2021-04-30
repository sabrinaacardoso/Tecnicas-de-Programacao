/* Disciplina: Técnicas de Programação.
   Unidade: 6
   Questão: Laboratório Virtual de Programação 12.
   Objetivo do programa: Calcular rendimento mensal de duas contas poupanças */

//Arquivo cabeçalho
#ifndef CONTADEPOUPANCA_H
#define CONTADEPOUPANCA_H

class ContaDePoupanca{
    private:
        //Declarção das variváveis
        static float taxaDeJurosAnual; //variável estática
        float saldoDaPoupanca;
        

    public:
        //Declaração dos métodos
        ContaDePoupanca(float = 0);
        void setSaldoDaPoupanca(float);
        float getSaldoDaPoupanca() const;
        static void modifiqueTaxaDeJuros(float);//método estatico
        static float getTaxaDeJurosAnual( );
        float calculeRendimentoMensal();
};
#endif
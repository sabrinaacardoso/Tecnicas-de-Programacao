//Arquivo Empresa.h
/* Disciplina: Técnicas de Programação.
   Unidade: 7
   Questão: Laboratório Virtual de Programação 16.
   Objetivo do programa: Calcular desconto no imposto de tipos de empresa */

#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
#include <iostream>

using namespace std;

class Empresa{
        //Declaração das variáveis
        string nome;
        string CNPJ;
        float faturamento;
        static float imposto; //variável estática
    
    public:
        //Declaração dos métodos
        Empresa (string = " ", string = " ", float = 0.0); //Construtor com parametro;
        void setNome(string);
        string getNome( )const;
        void setCNPJ(string);
        string getCNPJ( )const;
        void setFaturamento(float);
        float getFaturamento( ) const;
        static float getImposto( );
        void Imprime( );
};
#endif
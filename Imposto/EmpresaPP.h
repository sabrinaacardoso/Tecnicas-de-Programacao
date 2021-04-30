#ifndef EMPRESAPP_H
#define EMPRESAPP_H

#include "Empresa.h"

class EmpresaPP : public Empresa{
        //Declaração das variáveis
        float desconto;

    public:
        //Declaração dos métodos
        EmpresaPP( ); //Construtor vazio
        EmpresaPP(string, string, float, float); //Construtor com parametro
        float Calcula( );
        void Imprime( );
};
#endif
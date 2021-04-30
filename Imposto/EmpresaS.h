#ifndef EMPRESAS_H
#define EMPRESAS_H

#include "Empresa.h"

class EmpresaS : public Empresa{
        //Declaração das variáveis
        float desconto;

    public:
        //Declaração dos métodos
        EmpresaS( ); //Construtor vazio
        EmpresaS(string, string, float, float); //Construtor com parametro
        float Calcula( );
        void Imprime( );
};
#endif
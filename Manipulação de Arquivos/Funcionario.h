#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;

class Funcionario{
    string nome;
    float salario;
    
  public:
    Funcionario( );
    void setNome(string);
    string getNome( ) const;
    void setSalario(float);
    float getSalario (void) const;
};
#endif
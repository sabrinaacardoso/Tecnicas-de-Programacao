#include "Funcionario.h"
Funcionario :: Funcionario( ){
  nome = " ";
  salario = 0.0;
}

void Funcionario :: setNome(string nome){
  this->nome = nome;
}

string Funcionario :: getNome( ) const{
  return nome;
}

void Funcionario :: setSalario(float salario){
  this->salario = salario;
}

float Funcionario :: getSalario (void) const{
  return salario;
}

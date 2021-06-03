/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 15 */

#include "Pessoa.h"

// construtor para inicializar os atributos da classe
Pessoa::Pessoa()
{
    this->nome="";
    this->CPF="";
}

// método que modifica o nome para o nome inserido pelo usuário
void Pessoa::setNome(string nome)
{
    this->nome=nome;
}

// método que modifica o CPF para o CPF inserido pelo usuário
void Pessoa::setCPF(string CPF)
{
    this->CPF=CPF;
}

// imprime nome e CPF do empregado
string Pessoa::getNome()const
{
    return nome;
}

string Pessoa::getCPF()const
{
    return CPF;
}

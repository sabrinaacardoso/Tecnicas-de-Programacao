//Arquivo.cpp com os métodos
//Construtor para inicializar as variaveis com vazio

#include "Nome.h"

Nome :: Nome( ){
    this -> cpf = " ";
    this -> nome= " ";
}

//Método para modificar a variável nome
void Nome :: setNome(string nome){
    this -> nome = nome;
}

//Método para retornar a variável nome
string Nome :: getNome( ){
    return nome;
}

//Método para modificar a variável cpf
void Nome :: setCPF(string cpf){
    this -> cpf = cpf;
}

//Método para retornar a variável cpf
string Nome :: getCPF( ){
    return cpf;
}

//Método para ordenar os nomes em ordem alfabética (não funcionou)
/*void Nome :: Ordenar( ){
    int i, j = 0, r;
    char aux[50];
    for(i = 0; i < 50; i++)
    {
        for(j = i + 1; j < 49; i++)
        {
            r = strncmp(nome[i], nome[j],i;
            if (r > 0)
            {
                strncpy(aux,nome[i],i);
                strncpy(nome[i],nome[j],i);
                strncpy(nome[j],aux,i);
            }
        }
    }
}*/
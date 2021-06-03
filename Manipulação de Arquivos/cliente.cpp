// cliente1.cpp
// Criação sequencial de um arquivo de acesso aleatório
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "cliente.h"

int main()
{
    cliente clienteVazio = {0, "", 0.0};
    ofstream outCredito("credito.dat",ios::out); // leitura
    if(!outCredito)
    {
        // Fluxo de saída padrão para erros
        cerr << "Arquivo credito.dat nao pode ser aberto." << endl;
        exit(1);
    }
    for (int i = 0; i < 100; i++)
        // 1º o ponteiro para caractere do arquivo, o segundo é o endereço e o último é tamanho do objeto
        outCredito.write((const char *)(&clienteVazio), sizeof(cliente));
    return 0;
}

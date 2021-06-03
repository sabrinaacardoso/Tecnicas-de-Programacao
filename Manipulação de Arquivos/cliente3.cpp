// cliente3.cpp
// Lendo Dados Sequencialmente a partir de um Arquivo de Acesso Aleatório
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "cliente.h"
int main()
{
    cliente c;
    ifstream inCredito("credito.dat", ios::in); // escrita
    if(!inCredito)
    {
        cerr << "Arquivo credito.dat nao pode ser aberto." << endl;
        exit(1);
    }
    // alinhar os valores exibidos do arquivo
    cout << setiosflags(ios::left)
         << setw(10) << "Conta"
         << setw(30) << "Nome"
         << resetiosflags(ios::left)
         << setw(10) << "Saldo" << endl;
    inCredito.read((char *)(&c), sizeof(cliente));
    // enquanto não chegar ao fim do arquivo
    while (!inCredito.eof())
    {
        if(c.numero != 0)
            cout << setiosflags(ios::left)
                 << setw(10) << c.numero
                 << setw(30) << c.nome
                 << setw(10) << setprecision(2) << resetiosflags(ios::left)
                 << setiosflags(ios::fixed | ios::showpoint) << c.saldo << endl;
        // comando para ler o que tem no arquivo
        // 1º o ponteiro para caractere do arquivo, o segundo é o endereço e o último é tamanho do objeto
        inCredito.read((char *)(&c), sizeof(cliente));
    }
    return 0;
}

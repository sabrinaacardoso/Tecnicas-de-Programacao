/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
Unidade 7 - LVP 15:

Dada a classe Pessoa abaixo, crie a classe
Empregado derivada dessa classe, com os
atributos numeroSecao, salarioBase
(vencimento base) e IR
(percentagem retida para o imposto de renda).
Implemente a classe Empregado com um método
para modificação de cada dado e outro para
calcularSalario (salário líquido). Lembrando
que o salário líquido é o salário base menos
o desconto do Imposto de Renda. A classe
Empregado tem também um método que imprime
os dados do Empregado (Nome, CPF, numeroSecao)
e o seu respectivo salário líquido.

A classe Pessoa não pode ser alterada, mas
seus métodos devem ser implementados para
serem usados no programa.
class Pessoa {
      string nome;
      string CPF;
   public:
       Pessoa();
       void setNome(string);
       void setCPF(string);
       void imprimeNomeCPF() const;
   };

Entrada
Devem ser lidos os dados de um empregado: nome,
CPF, número de seção, salário e imposto de renda,
respectivamente.

Saída
Deve conter os dados do empregado: nome, CPF,
número de seção e o resultado do cálculo do
salário líquido. */


#include <iostream>
#include <locale>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "Pessoa.cpp"

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa faz o cadastro de x pessoas informadas "
    << "pelo usuário." << endl << endl;
    ofstream pessoaWrite("grupo1.txt", fstream::app);
    // variáveis para guardar informações que o usuário digitar
    string nomeFun, cpf, linha;
    int quantidadeCadastros;
    // definindo o objeto da classe
    Pessoa pessoa1;

    cout << "Quantos cadastros você deseja realizar? ";
    cin >> quantidadeCadastros;

    while(quantidadeCadastros!=0)
    {
        system("cls");
        cout << "Insira os seguintes dados do usuário: " << endl << endl;
        cout << "Nome: ";
        cin >> nomeFun;
        cout << endl << "CPF: ";
        cin >> cpf;

        pessoa1.setNome(nomeFun);
        pessoa1.setCPF(cpf);

        // inserindo o objeto no arquivo
        pessoaWrite << pessoa1;
        quantidadeCadastros--;
    }
    pessoaWrite.close();

    // lendo
    ifstream arquivoRead("grupo1.txt");
    system("cls");
    cout << endl << "\tCADASTROS EFETUADOS" << endl << endl;

    // formatação
    cout << setiosflags(ios::left)
         << setw(10) << "NOME"
         << setw(30) << "CPF"
         << resetiosflags(ios::left) << endl;

    // verificando se o arquivo foi aberto
    if(arquivoRead.is_open())
    {
        // ler até o final do arquivo
        while(!arquivoRead.eof())
        {
            cout << setiosflags(ios::left)
                 << setw(10) << pessoa1.getNome()
                 << setw(30) << pessoa1.getCPF()
                 << setw(10) << setprecision(2) << resetiosflags(ios::left)
                 << setiosflags(ios::fixed | ios::showpoint) << endl;
            // comando para ler o que tem no arquivo
            arquivoRead >> pessoa1;
        }
        arquivoRead.close();
    }
    else
    {
        cout << "Não foi possível abrir o arquivo!" << endl;
    }
    return 0;
}

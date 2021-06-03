#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Funcionario.cpp"

//Cria dados sequenciais

int main( ){
  Funcionario funcionario;
  string nome;
  float salario;

  ofstream FuncionarioFile; //sai do sistema e entra no arquivo 
  FuncionarioFile.open("Funcionarios.dat", ios::out);//abre um arquivo para a saída

      if (!FuncionarioFile){ //testa se o arquivo abriu
        cout << "Arquivo Funcionario.dat nao pode ser aberto" << endl;
        exit(EXIT_FAILURE);
      } 

  cout<<"Entre com o nome e o salario dos funcionarios: "<<endl;
  cout<<"Tecle Ctrl+z para encerrar a entrada de dados."<<endl; // Ctrl+d: Linux
  FuncionarioFile << "Dados dos Funcionarios" <<endl<<endl;

      while(cin >> nome >> salario){
          funcionario.setNome(nome);
          FuncionarioFile << "Nome: " <<funcionario.getNome( ); //Armazena no arquivo

          funcionario.setSalario(salario);
          FuncionarioFile << " / Salario: R$ "<<funcionario.getSalario( )<<endl; //Armazena no arquivo

          cout<<"-> ";
      }
  cout<<"Programa encerrado!";
  FuncionarioFile.close( ); //Fecha o arquivo
  return 0;
}
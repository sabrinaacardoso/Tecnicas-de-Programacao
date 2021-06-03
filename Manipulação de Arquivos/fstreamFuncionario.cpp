#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Funcionario.cpp"

//Cria e le arquivos de dados sequenciais

int main( ){
  Funcionario funcionario;
  string nome, linha;
  float salario;

  fstream FuncionarioFile;
  FuncionarioFile.open("Funcionarios.dat", ios::out | ios::app); 

      if (!FuncionarioFile){ //testa se o arquivo abriu
        cout << "Arquivo Funcionario.dat nao pode ser aberto" << endl;
        exit(EXIT_FAILURE);
      } 

  cout<<"Entre com o nome e o salario dos funcionarios: "<<endl;
  cout<<"Tecle Ctrl+z para encerrar a entrada de dados."<<endl; // Ctrl+d: Linux

      while(cin >> nome >> salario){
          funcionario.setNome(nome);
          FuncionarioFile << "Nome: " <<funcionario.getNome( ); //Armazena no arquivo

          funcionario.setSalario(salario);
          FuncionarioFile << " / Salario: R$ "<<funcionario.getSalario( )<<endl; //Armazena no arquivo

          cout<<"-> ";
      }

    FuncionarioFile.close( );

    cout<<"Para imprimir o arquivo na tela: "<<endl;
    system("pause");

    FuncionarioFile.open("Funcionarios.dat", ios::in);

    if (! FuncionarioFile){ //testa se o arquivo abriu
        cout << "Arquivo Funcionario.dat nao pode ser aberto" << endl;
        exit(EXIT_FAILURE);
      } 
      while(getline (FuncionarioFile, linha)){ //extrai do arquivo e salva em linha
          cout<<linha<<endl;
      }    

  cout<<"Programa encerrado!";
  FuncionarioFile.close( ); //Fecha o arquivo

  return 0;
}
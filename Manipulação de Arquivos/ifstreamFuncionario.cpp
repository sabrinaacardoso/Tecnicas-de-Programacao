#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Funcionario.cpp"

//lendo e imprimindo um arquivo de dados sequenciais

int main( ){
  Funcionario funcionario;
  string linha;

  ifstream FuncionarioFile; //sai do arquivo e entra no sistema 
  FuncionarioFile.open("Funcionarios.dat", ios::in);

      if (! FuncionarioFile){ //testa se o arquivo abriu
        cout << "Arquivo Funcionario.dat nao pode ser aberto" << endl;
        exit(EXIT_FAILURE);
      } 
      while(getline (FuncionarioFile, linha)){ //extrai do arquivo e salva em linha
          cout<<linha<<endl;
      }    

  FuncionarioFile.close( );

  return 0;
}
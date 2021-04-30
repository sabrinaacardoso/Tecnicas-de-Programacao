/* Aluna: Sabrina Araújo Cardoso
   Matrícula: 118210114
   Disciplina: Técnicas de Programação.
   Unidade: 3
   Questão: Laboratório Virtual de Programação 05.
   Objetivo do programa: Simular o funcionamento de um elevador */

#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

class Elevador{
      int andar_atual, total_andares, capacidade, qnt_pessoas;

   public:
      Elevador(int, int);
      Elevador( );
      void Situacao( );
      void Entra( );
      void Sai( );
      void Sobe(int);
      void Desce(int);
};
Elevador :: Elevador(int t_andares, int capac){
   total_andares = t_andares;
   capacidade = capac;
}

Elevador :: Elevador ( ){
   andar_atual = qnt_pessoas = 0;
   total_andares = 5;
   capacidade = 6;
}

void Elevador :: Situacao( ){
   cout<<"Elevador com : "<<qnt_pessoas<<" Pessoa(s)"<<endl;
   cout<<"Andar: "<<andar_atual<<endl;
}

void Elevador :: Entra( ){
   if (qnt_pessoas<capacidade){
      qnt_pessoas++;
   }
   else 
      cout <<"Elevador cheio"<<endl;
   Situacao( );     
}

void Elevador :: Sai ( ){
    if (qnt_pessoas == 0){
      cout<<"Elevador vazio"<<endl;
   }
   else 
      qnt_pessoas--;

   Situacao( );      
}

void Elevador :: Sobe(int a){
   if ((a > total_andares) || (a < 0) || (a < andar_atual)){
      cout<<"opção inválida"<<endl;
   }
   else{
      andar_atual = a; 
   }
   Situacao( );
}

void Elevador :: Desce(int a){
   if ((a > total_andares) || (a < 0) || (a > andar_atual)){
      cout << "Opção inválida"<<endl;
   }
   else {
      andar_atual = a;
   }
   Situacao( );   
}

int main ( ){
   setlocale(LC_ALL, "Portuguese");
   Elevador elevador;
   int op, andar, condicao;

   cout<<"Ola, para utilizar o elevador, escolha as opcoes abaixo: "<<endl;
   cout<<"------------------------------------------------------------"<<endl;
                  
      cout<<"1 - entra"<<endl;
      cout<<"2 - sai"<<endl;
      cout<<"3 - sobe"<<endl;
      cout<<"4 - desce"<<endl;
      cout<<"5 - encerra o menu"<<endl;

      while (condicao != 5){
         cin>>op;
            switch (op){               
               case 1:
                  elevador.Entra( );
               break;
               case 2:
                  elevador.Sai( );
               break;

               case 3:
                  cout<<"Informe o andar desejado: "<<endl;
                  cin>>andar;
                  elevador.Sobe(andar);
               break;

               case 4:
                  cout<<"Informe o andar desejado: "<<endl;
                  cin>>andar;
                  elevador.Desce(andar);
               break;

               case 5:
                  exit(0);
               break;

               default:
               break;
            }
      }   
return 0;
}
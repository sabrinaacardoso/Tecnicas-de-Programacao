//Arquivo main.cpp
#include "Imovel.h"
#include "Imovel.cpp"
#include "Novo.h"
#include "Novo.cpp"
#include "Velho.cpp"
#include <locale>

int main( ){
    setlocale (LC_ALL, "Portuguese");
    Novo novo;
    Velho velho;
    float porcentagem;
    int op;

    cout<<"Olá, nesse programa você irá calcular o valor de imóveis com base em porcentagens dadas para imóveis novos e imóveis velhos"<<endl;
    cout<<"O valor base de um imóvel é R$ 100.000,00"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
    
    //Pede para o usuario escolher um tipo de imóvel
    cout<<"Para realizar o calculo, digite: "<<endl;
    cout<<"1 - Novo"<<endl;
    cout<<"2 - Velho"<<endl;
    cin>>op;
    cout<<"Agora, entre com a porcentagem: "<<endl;

    //Pede a porcentagem ao usuário e retorna o valor do imovel escolhido
    switch (op){
        case 1: 
            cin>>porcentagem;
            novo.setPorcentagem(porcentagem);
            novo.Imprime( );
        break;

        case 2:   
            cin>>porcentagem;
            velho.setDesconto(porcentagem);
            velho.Imprime( );
        break;

        default:
        break;
    }

    return 0;
}
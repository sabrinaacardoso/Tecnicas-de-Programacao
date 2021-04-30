//Arquivo main
#include "Lab07.h"
#include "Lab07.cpp"

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    Fracao f1, f2, fr; //Declaração das variaveis do tipo Fracao
    int num, den, op;

    cout<<"Olá, nesse programa você irá realizar a multiplicação e a divisão entre duas frações!" <<endl;
    cout<<"---------------------------------------------------------------------------------------"<<endl<<endl;

    //Pede ao usuário para escolher a operação desejada
    cout<<"Escolha uma das opções: "<<endl;
    cout<<"1. Multiplicar"<<endl;
    cout<<"2. Dividir"<<endl;
    cin>>op;

    //Pede ao usuário que entre com as duas frações
    cout<<"Entre com a primeira fração (numerador/denominador): "<<endl;
    cin>>num;
    cin>>den;
    f1.setFracao(num,den);
    cout<<"Entre com a segunda fração (numerador/denominador): "<<endl;
    cin>>num;
    cin>>den;
    f2.setFracao(num,den);

        switch (op)
        {
            case 1:
                //Retorna ao usuário a multiplicação das frações   
                fr.Multiplica(f1, f2);
                cout<<"A multiplicacao no formato racional: "; 
                fr.imprimeFracao( );
                cout<<"Em ponto flutuante: ";
                fr.imprimeFloat( );
            break;
            
            case 2:
                //Retorna ao usuário a divisão das frações    
                fr.Divide(f1,f2);
                cout<<"A divisao no formato racional: ";
                fr.imprimeFracao( );
                cout<<"Em ponto flutuante: ";
                fr.imprimeFloat( );
            break;

            default:
            break;
        }
    return 0;
}

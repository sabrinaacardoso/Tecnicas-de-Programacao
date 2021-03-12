/* Aluna: Sabrina Araújo Cardoso
   Matrícula: 118210114
   Disciplina: Técnicas de Programação.
   Unidade: 1
   Questão: Laboratório Virtual de Programação 02.
   Objetivo do programa: Converter temperatura em grau Celsius para Fahrenheit e vice-versa, com precisão de duas casas decimais. */

    #include <iostream>
    #include <locale>
    #include <iomanip>
   
    using namespace std;
    
    //Declaração do union.
    union converte {
       float celsius, fahrenheit; 
   };

    int main ( ){
       setlocale(LC_ALL, "Portuguese");
       converte temperatura;
       int opcao;

       //Pede a usuário que escolha uma opção para o tipo de conversão desejada. 
       cout<<"Olá! Nesse programa, você conseguirá converter temperaturas de Celsius para Fahrenheit e vice-versa."<<endl;
       cout<<"-------------------------------------------------------------------------------------------------------"<<endl<<endl;
       cout<<"Digite 1: Para converter a temperatura em Celsius-Fahrenheit."<<endl;
       cout<<"Digite 2: Para converter a temperatura em Fahrenheit-Celsius."<<endl;
       cin>>opcao;

            //Switch para receber essa opção e retornar o valor convertido para o usuário.
            switch (opcao)
            {   //Caso 1: Converte a temperatura de celsius para fahrenheit e retorna ao usuário o valor em fahrenheit.
                case 1: 
                    cout<<"Você escolheu a opção Celsius-Fahrenheit."<<endl;
                    cout<<"Entre com a temperatura em graus Celsius: ";
                    cin>>temperatura.celsius;

                    //Formula de conversão Celsius-Fahrenheit.
                    temperatura.fahrenheit = (temperatura.celsius*1.8) + 32;

                    cout<<"Temperatura em Fahrenheit:"<< fixed << setprecision (2) << temperatura.fahrenheit <<endl;
                break;

                //Caso 2: Converte a temperatura de fahrenheit para celsius e retorna ao usuário o valor em celsius.
                case 2:
                    cout<<"Você escolheu a opção Fahrenheit-Celsius."<<endl;
                    cout<<"Entre com a temperatura em graus Fahrenheit: ";
                    cin>>temperatura.fahrenheit;
                    
                    //Formula de conversão Fahrenheit-Celsius.
                    temperatura.celsius = (temperatura.fahrenheit - 32)/1.8;

                    cout<<"Temperatura em Celsius:"<< fixed << setprecision (2) << temperatura.celsius <<endl;
                break;

                //Default: Mensagem de erro para quando o usuário escolhe uma opção diferente de 1 e 2.
                default:
                    cout<<"Opção inválida!"<<endl;
                break;
            }
    return 0;
   }
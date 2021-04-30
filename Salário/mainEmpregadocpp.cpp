//Arquivo main.cpp
#include "Pessoa.cpp"
#include "Empregado.cpp"


int main ( ){
    Empregado empregado;
    string nome, cpf;
    float salario, ir;
    int nSecao;

    //Pede que o usuário insira os dados do empregado
    cout<<"Insira os seguintes dados do empregado: "<<endl;
    cout<<"Nome: ";
    cin>>nome;
    empregado.setNome(nome);
    cout<<"CPF: ";
    cin>> cpf;
    empregado.setCPF(cpf);    

    cout<<"Número da Seção: ";
    cin>>nSecao;
    empregado.setnumeroSecao(nSecao);
    cout<<"Salário base: ";
    cin>>salario;
    empregado.setsalarioBase(salario);
    cout<<"Imposto de renda: ";
    cin>>ir;
    empregado.setIR(ir);

    //Imprime os dados so empregado para o usuário
    empregado.imprimeDados( );

    return 0;
}
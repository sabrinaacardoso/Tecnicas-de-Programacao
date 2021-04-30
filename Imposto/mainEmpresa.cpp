#include "Empresa.cpp"
#include "EmpresaPP.cpp"
#include "EmpresaS.cpp"
#include <locale>
#include <cstdlib>

int main ( ){
    EmpresaS empresaSimples;
    EmpresaPP empresaPp;
    Empresa empresa;
    string nome, cnpj;
    float faturamento;
    int op1, op2;

    cout<<"Aqui você ira calcular quanto de imposto sua empresa precisara pagar!"<<endl;
    cout<<"---------------------------------------------------------------"<<endl<<endl;

    //Pede que o usuario diga se sua empresa é de pequeno porte ou não
    cout<<"Sua empresa é de Pequeno Porte?"<<endl;
    cout<<"1. Nao"<<endl;
    cout<<"2. Sim"<<endl;
    cin>>op1;

    //Se for de Pequeno Porte, diga se ela é simples ou não
    if(op1==2){
        system("cls");
        cout<<"Sua empresa esta cadastrada no SIMPLES?"<<endl;
        cout<<"1. Nao"<<endl;
        cout<<"2. Sim"<<endl;
        cin>>op2;
            //Se for de pequeno porte e simples: desconto de 70%
            if(op2==2){
                system("cls");
                cout<<"Entre com:"<<endl;
                cout<<"Nome: "<<endl;
                cin>>nome;
                empresaSimples.setNome(nome);
                cout<<"CNPJ: "<<endl;
                cin>>cnpj;
                empresaSimples.setCNPJ(cnpj);
                cout<<"Faturamento: "<<endl;
                cin>>faturamento;
                empresaSimples.setFaturamento(faturamento);
                empresaSimples.Calcula( );
                empresaSimples.Imprime( );
            }
            //Se for de pequeno porte e não for simples: desconto de 50%
            else{
                system("cls");
                cout<<"Entre com:"<<endl;
                cout<<"Nome: "<<endl;
                cin>>nome;
                empresaPp.setNome(nome);
                cout<<"CNPJ: "<<endl;
                cin>>cnpj;
                empresaPp.setCNPJ(cnpj);
                cout<<"Faturamento: "<<endl;
                cin>>faturamento;
                empresaPp.setFaturamento(faturamento);
                empresaPp.Calcula( );
                empresaPp.Imprime( );
            }
        }
    //Se não for de pequeno porte: desconto de 17%        
    else{
        system("cls");
        cout<<"Entre com:"<<endl;
        cout<<"Nome: "<<endl;
        cin>>nome;
        empresa.setNome(nome);
        cout<<"CNPJ: "<<endl;
        cin>>cnpj;
        empresa.setCNPJ(cnpj);
        cout<<"Faturamento: "<<endl;
        cin>>faturamento;
        empresa.setFaturamento(faturamento);
        empresa.Imprime( );
    }  


return 0;
}
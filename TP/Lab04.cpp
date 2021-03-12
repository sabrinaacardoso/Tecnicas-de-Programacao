/* Aluna: Sabrina Araújo Cardoso
   Matrícula: 118210114
   Disciplina: Técnicas de Programação.
   Unidade: 2
   Questão: Laboratório Virtual de Programação 04.
   Objetivo do programa: Calcular IMC de uma pessoa */

#include <iostream>
#include <locale>
#include <string>
#include <iomanip>

using namespace std;

class Pessoa {
    //Declaração dos atributos.
    string nome, sexo;
    int idade;
    float altura, peso, imc;

    public:
    //Declaração dos métodos.
    void setNome (string);
    string getNome( );
    void setSexo(string);
    string getSexo();
    void setIdade(int);
    int getIdade( );
    void setAltura(float);
    float getAltura( );
    void setPeso(float);
    float getPeso( );
    void CalcularIMC( );
    float getIMC( );
    string getCategoria( );
};
//métodos para modifica o atributo nome
void Pessoa :: setNome (string n){
    nome = n;
}
//métodos para acessar o atributo nome
string Pessoa :: getNome( ){
    return nome;
}
//métodos para modifica o atributo sexo
void Pessoa :: setSexo(string s){
    sexo = s;
}
//métodos para acessar o atributo sexo
string Pessoa ::  getSexo(){
    return sexo;
}
//métodos para modifica o atributo idade
void Pessoa :: setIdade(int i){
    idade = i;
}
//métodos para acessar o atributo idade
int Pessoa ::  getIdade( ){
    return idade;
}
//métodos para modifica o atributo altura
void Pessoa :: setAltura(float h){
    altura = h;
}
//métodos para acessar o atributo altura
float Pessoa :: getAltura( ){
    return altura;
}
//métodos para modifica o atributo peso
void Pessoa :: setPeso(float p){
    peso = p;
}
//métodos para acessar o atributo peso
float Pessoa :: getPeso( ){
    return peso;
}
//métodos para calcular o imc
void Pessoa ::  CalcularIMC( ){
    imc = peso/((altura)*(altura));
}
//métodos para acessar o calculo do imc
float Pessoa :: getIMC( ){
    CalcularIMC( );
    return imc;
}
//métodos para acessar as categorias
string Pessoa :: getCategoria( ){
    if (imc <= 18.5){
        return "Abaixo do peso normal.";
    }
    else if (imc <= 25.0){
        return "Peso Normal.";
    }
    else if (imc <= 30.0) {
        return "Acima do peso normal.";
    }
    else {
        return "Obesidade.";
    }
}

int main ( ){
    setlocale(LC_ALL, "Portuguese");
    Pessoa pessoa;
    string name, sexo;
    int idade;
    float altura, peso;


    cout<<"Olá, nesse programa, você irá realizar o calculo do IMC de uma pessoa!"<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl<<endl;
    //Pede para o usuário entrar com os dados
    cout<<"Entre com o nome da pessoa: ";
    cin>>name;
    pessoa.setNome(name);
    cout<<"Entre com a idade da pessoa: ";
    cin>>idade;
    pessoa.setIdade(idade);
    cout<<"Entre com a altura da pessoa (em metros): ";
    cin>>altura;
    pessoa.setAltura(altura);
    cout<<"Entre com o peso da pessoa (em kg): ";
    cin>>peso;
    pessoa.setPeso(peso);
    cout<<"Entre com o sexo da pessoa (Feminino ou Masculino): ";
    cin>>sexo;
    pessoa.setSexo(sexo);

    cout<<"\n---------------------------------------"<<endl;
    //Retorna os dados para o usuário
    cout<<"Nome: "<<pessoa.getNome( )<<endl;
    cout<<"Idade: "<<pessoa.getIdade( )<<endl;
    cout<<"Altura: "<<pessoa.getAltura( )<<endl;
    cout<<"Peso: "<< fixed << setprecision (2) << pessoa.getPeso( )<<endl;
    cout<<"Sexo: "<<pessoa.getSexo( )<<endl;
    cout<<"IMC: "<< fixed << setprecision (2) << pessoa.getIMC( )<<endl;
    cout<<"Categoria IMC: "<<pessoa.getCategoria( )<<endl;

return 0;    
}
/* Aluna: Sabrina Araújo Cardoso
   Matrícula: 118210114
   Disciplina: Técnicas de Programação.
   Unidade: 2
   Questão: Laboratório Virtual de Programação 03.
   Objetivo do programa: Calcular comprimento, largura, perímetro e área de um retangulo */

#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

class Retangulo{
    //Declaração dos atributos 
	int pix, piy, psx, psy;
	bool checar (int,int,int,int);

  public:
    //Declaração dos métodos
  	void setValores(int, int, int, int);
    int comprimento( );
	int largura( );
	int perimetro( );
	int area( );
	bool ehquadrado( );  	
};

//Método para checar seos pontos estão no primeiro quadrante
bool Retangulo::checar (int a, int b, int c, int d){
    if((a < 15 && a >= 0)&&(b < 15 && b >= 0)&&(c < 15 && c >= 0)&&(d < 15 && d >= 0)){
         return true;
    }
    else{
        return false;
    }
}

//Método para modificar os atributos x1, y1, x2 e y2
void Retangulo::setValores(int x1, int y1, int x2, int y2){
    bool a = checar (x1, y1, x2, y2);
        if (a){
            pix = x1;
            piy = y1;
            psx = x2;
            psy = y2;
        }
        else{
            pix = 0;
            piy = 0;
            psx = 0;
            psy = 0;
        }
}

//Método para calcular o comprimento (sempre é maior que a largura)
int Retangulo::comprimento( ){
    int x = (psx - pix); // x2 - x1
    int y = (psy - piy); // y2 - y1
    
        if (x > y){
            return x;
        }
        else{
            return y;
        }
}

//Método para calcular a largura
int Retangulo::largura( ){ 
    int x = (psx - pix); //(x2-x1)
    int y = (psy - piy); //(y2-y1)
    
        if (comprimento ( ) == x){
            return y;
        }
        else {
            return x;
        }
}

//Método para calcular o perímetro (soma de todos os lados)
int Retangulo::perimetro( ){
    int l = largura( );
    int c = comprimento( );
        if (l < 0){
            return ((2*(-l))+(2*c));
        }
        else if (c < 0){
            return ((2*l)+(2*(-c)));
        }
        else 
            return ((2*l)+(2*c));
}

//Método para calcular a área (comprimento x largura)
int Retangulo::area( ){
    int l = largura( );
    int c = comprimento( );
        if (l < 0 || c < 0){
            return -(l*c);
        }    
        else 
            return (l*c);
}

//Método para saber se é um quadrado 
bool Retangulo::ehquadrado( ){
    int l = largura( );
    int c = comprimento( );

        if (l == c && c != 0 && l != 0){
            cout<<"É um quadrado!";
            return true;
        }
        else {
            return false;
        }
}

int main ( ){
    setlocale(LC_ALL, "Portuguese");
    Retangulo ret;
    int x1,x2,y1,y2;

    cout<<"Olá! Nesse programa, você irá calcular o comprimento, a largura, o perímetro e a área de um retangulo formado por dois pontos"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"Entre com a primeira coordenada (x1, y1): "<<endl;
    cin >> x1 >> y1;
    cout<<"Entre com a segunda coordenada (x2, y2): "<<endl;
    cin >> x2 >> y2;

    ret.setValores (x1, y1, x2, y2);

    cout<<"Comprimento: "<<ret.comprimento( )<<endl;
    cout<<"Largura: "<<ret.largura( )<<endl;
    cout<<"Perímetro: "<<ret.perimetro( )<<endl;
    cout<<"Área: "<<ret.area( )<<endl;

    ret.ehquadrado( );

    return 0;
}
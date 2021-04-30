//Arquivo com os métodos
#include "Lista.h"

//Construtor para inicializar definindo um tamanho para o vetor
Lista :: Lista (int tam){
    tamanho = tam>0 ? tam:0;
	nomes = new string [tamanho];
	t=0;
}

//Método para modificar o nome
void Lista :: setNomes(string nome){
    if (t<tamanho){
		nomes[t]=nome;
		t++;				 
	}
}

//Método para imprimir a lista de nomes
void Lista :: imprimeNomes( ){
    for (int i=0;i<t;i++){		
		cout<<"Nome["<<i+1<<"]: ";
        cout<< nomes[i]<<endl;
	}
}

//Método para imprimir a lista de nomes em ordem alfabética
void Lista :: imprimeOrdenada( ){
    int k, i;
    string aux;
    for(k = 1; k < tamanho; k++){

        for(i = 0; i < tamanho - k; i++){

            if(nomes[i].compare(nomes[i+1]) == 1){

                aux = nomes[i];
                nomes[i] = nomes[i+1];
                nomes[i+1] = aux;
            }
        }
    }
}

//Destrutor
Lista :: ~Lista( ){
    delete [ ] nomes;
    cout<<"Memoria Liberada."<<endl;
}
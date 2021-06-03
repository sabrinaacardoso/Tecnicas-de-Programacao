#include <fstream>//Para operacao do arquivo
#include <iostream>//Para entrada e sa�da
#include <locale>//Biblioteca de portugu�s

using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    ofstream myFile; //Objeto para leitura
    ifstream file; //Objeto para escrever
    char ch[30];
    char text;

    cout<<"Digite o texto"<<endl;
    cin.getline(ch,30);  //Fun��o Getline.

    //Abrindo arquivo para escrita
    myFile.open("ArquivoCur.txt", ios::out);
    if(myFile) //Verificador de erros:
    {
        myFile<<ch;
        cout<<"Sucesso no armazenamento:"<<endl;
    }
    else
        cout<<"Erro ao abrir o arquivo!"<<endl;
    myFile.close(); //Fechar arquivo

    //Abrindo arquivo para leitura
    file.open("ArquivoCur.txt", ios::in);
    if(file) //Verificar erro
    {
        file.seekg(7, ios::beg);/*Pule os primeiros
        7 bytes*/
        file.seekg(-2, ios::cur); /*Depois, recue 2 bytes para a posição inicial */
        cout << endl;
        cout<<"A saida apos pular os 7 bytes e depois mover 2 bytes para tras eh: " << endl;

        while(!file.eof())/*Leia os dados ate o final do arquivo: */
        {
            file.get(text); //Ler os dados
            cout<<text;//Mostrar os dados
        }
    }
    else
        cout<<"Erro ao abrir o arquivo!"<<endl;
    file.close(); //Arquivo fechado
    return 0;
}

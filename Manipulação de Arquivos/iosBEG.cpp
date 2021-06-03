#include <fstream>//Para operação do arquivo
#include <iostream>//Para entrada e saída
#include <locale>//Biblioteca de português

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    ofstream myFile; //Objeto para leitura
    ifstream file; //Objeto para escrever
    char ch[30];
    char text;

    cout<<"Digite o texto"<<endl;
    cin.getline(ch,30);  //Função Getline.

    //Abrindo arquivo para escrita
    myFile.open("ArquivoBeg.txt", ios::out);
    if(myFile) //Verificador de erros:
    {
        myFile<<ch;
        cout<<"Sucesso no armazenamento:"<<endl;
    }
    else
        cout<<"Erro ao abrir o arquivo!"<<endl;
    myFile.close(); //Fechar arquivo

    //Abrindo arquivo para leitura
    file.open("ArquivoBeg.txt", ios::in);
    if(file) //Verificar erro
    {
        file.seekg(7, ios::beg);/*Pule os primeiros
        7 bytes*/
        cout << endl;
        cout<<"A saída após pular os 7 bytes é: ";

        while(!file.eof())/*Leia os dados até o final do arquivo: */
        {
            file.get(text); //Ler os dados
            cout <<text;     //Mostrar os dados
        }
    }
    else
        cout<<"Erro ao abrir o arquivo!"<<endl;

    file.close(); //Arquivo fechado

    cout << endl;

    return 0;
}


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
    if(file)//Verificar erro
    {
        //Do fim do arquivo, mova 11 bytes pra trás
        file.seekg(-11, ios::end);
        cout << endl;

        cout<<"Os ultimos 11 bytes são: ";
        while(!file.eof()) // Leia os dados até o final do arquivo:
        {
            file.get(text); //Lendo
            cout << text; //Escrevendo
        }
    }

    else
        cout<<"Erro ao abrir o arquivo!"<<endl;
    file.close(); //Arquivo fechado

    return 0;
}


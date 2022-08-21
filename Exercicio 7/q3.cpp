#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <cstring>

using namespace std;

struct Aluno
{
    int id;
    char nome[50];
    float nota;
};

void printMenu()
{
    cout <<
         "1 - Adicionar Aluno\n" <<
         "2 - Exibir todas as notas\n" <<
         "3 - Calcular media\n" <<
         "4 - sair\n";
}

void iniciarArquivo(const char * __path)
{
    ofstream file;
    file.open(__path, ios::out);

    Aluno a = {0, "", 0.0};
    file.seekp(0);
    for(int i = 0; i < 50; i++)
    {
        file.write((const char * )(&a), sizeof(Aluno));
    }

    file.close();
}

void cadastrarAluno(fstream & __out)
{
    Aluno a;

    cout << "Entre com o ID do aluno [1 - 50]: ";
    cin >> a.id;

    getchar();

    cout << "Entre com o nome do aluno: ";
    
    string n;
    getline(cin, n);
    strcpy(a.nome, n.c_str());

    cout << "Entre com a nota do aluno: ";
    cin >> a.nota;

    __out.seekp((a.id - 1) * sizeof(Aluno));
    __out.write((const char *)(&a), sizeof(Aluno));

}

void ExibirNotas(fstream & in)
{
    Aluno a;
    

    for(int i = 0; i < 50; i++)
    {
        in.seekp(i * sizeof(Aluno));
        in.read((char *)(&a), sizeof(Aluno));
        if(a.id != 0) {
            cout <<
            "Nome: " << a.nome << endl <<
            "Nota: " << a.nota << endl;
        }
    }

}

float media(fstream & in)
{
    Aluno a;
    float media = 0;
    int i = 0;

    in.seekp(0);
    while(!in.eof())
    {
        in.read((char *)(&a), sizeof(Aluno));
        if(a.id != 0) {
            media += a.nota;
            i++;
        }
    }

    if(i == 0)
        return 0;
    else
        return media / i;

}

int main()
{

    const char * path = "out.txt";
    fstream file;

    file.open(path, ios::in);

    if(file.fail())
    {
        iniciarArquivo("out.txt");
    }
    file.close();
    file.open(path, ios::in | ios::out | ios::binary);


    int opcao;
    printMenu();

    cin >> opcao;

    while(opcao != 4)
    {
        switch(opcao)
        {
        case 1:
            cadastrarAluno(file);
            break;
        case 2:
            ExibirNotas(file);
            break;
        case 3:
            cout << "Media: " << media(file) << endl;
            break;
        default:
            break;

        }

        getch();
        system("cls");

        printMenu();
        cin >> opcao;

    }

    file.close();
    return 0;
}

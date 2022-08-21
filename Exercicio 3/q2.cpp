#include <iostream>
using namespace std;

void getInput(unsigned int & quantidadeDePessoas, unsigned int & capacidadeMaximaDaSala)
{
    cout << "Digite a quantidade de pessoas presentes na conferencia: ";
    cin >> quantidadeDePessoas;

    cout << "Digite a capacidade maxima da sala: ";
    cin >> capacidadeMaximaDaSala;

}

bool cancelarReuniao(unsigned int qttdP, unsigned int qttdM)
{
    return qttdM < qttdP;
}

int main()
{

    unsigned int quantidadeDePessoas;
    unsigned int capacidadeMaxima;

    getInput(quantidadeDePessoas, capacidadeMaxima);

    if(cancelarReuniao(quantidadeDePessoas, capacidadeMaxima))
    {
        cout << "A reuniao nao devera ocorrer\n"
             << quantidadeDePessoas - capacidadeMaxima << " pessoas devem sair da reuniao";
    }
    else
    {
        cout << "A reuniao pode ocorrer\n"
             << "Faltam " << capacidadeMaxima - quantidadeDePessoas << " pessoas para lotar a sala";
    }

    return 0;
}

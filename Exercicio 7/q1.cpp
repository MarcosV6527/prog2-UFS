#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int vetor1[5];
    int vetor2[5];
    string path;

    cout << "Entre com o nome do arquivo: ";
    getline(cin, path);
    fstream f;

    f.open(path, ios::out | ios::trunc);

    for(int i = 0; i < 5; i++) {
        cout << "Digite o valor de numero " << i + 1 << ": ";
        cin >> vetor1[i];
    }

    cout << "gravando dados...\n";

    for(int i = 0; i < 5; i++) {
        f << vetor1[i] << " ";
    }

    f.close();

    cout << "Dados gravados com sucesso\n";

    system("pause");

    cout << "Lendo dados...\n";

    f.open(path, ios::in);

    for(int i = 0; i < 5; i++) {
        f >> vetor2[i];
    }

    cout << "Dados lidos com sucesso\n";

    for(int i = 0; i < 5; i++) {
        cout << vetor2[i] << endl;
    }

    return 0;
}

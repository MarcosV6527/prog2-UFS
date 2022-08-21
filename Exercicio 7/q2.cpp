#include <iostream>
#include <fstream>

using namespace std;

void criarArquivo(const char * path)
{
    ofstream file;
    file.open(path, ios::out | ios::trunc);

    if(!file.is_open()) {
        cout << "Erro ao criar arquivo\n";
        exit(0);
    }


    file << "The process of creating a stream linked\n" <<
    "to a disk file is called opening the\n" <<
    "file. When you open a file, it become\n" <<
    "avaliable for (1) reading (meaning that\n" <<
    "data is a input from the file to the\n" <<
    "program), (2) writing (meaning that\n" <<
    "data from the program is saved in the\n" <<
    "file), or both.\n";

    file.close();

    if(file.fail()) {
        cout << "erro ao fechar arquivo\n";
        exit(0);
    }
}
void __copy_to_upper(ifstream & __input, ostream & output)
{
    char l;

    while(!__input.eof()) {
        __input.get(l);

        if(static_cast<int>(l) >= 97 && static_cast<int>(l) <= 122)
            l -= 32;

        output << (char) l;
    }

}
int main()
{

    const char * path = "lowercase.txt";

    ifstream file;
    ofstream output;
    file.open(path, ios::in);

    if(file.fail()) {
        file.close();
        criarArquivo(path);
        file.open(path, ios::in);
    }

    output.open("uppercase.txt", ios::out | ios::trunc);

    if(!output.is_open()){
        cout << "erro no arquivo de saida\n";
        exit(0);
    }

    __copy_to_upper(file, output);

    file.close();
    file.open(path, ios::in);

    __copy_to_upper(file, cout);

    file.close();
    output.close();








    return 0;
}

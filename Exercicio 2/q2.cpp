#include <iostream>
#include <math.h>
using namespace std;

double calcHipotenusa(double cat1, double cat2)
{
    return sqrt((pow(cat1, 2) + pow(cat2, 2)));
}

int main()
{

    double catetoA, catetoB;

    do
    {
        cout << "=======Calculadora de Hipotenusa=========\n";
        cout << "Quando um dos catetos for menor ou igual a 0,\no programa será finalizado\n";
        cout <<"==========================================\n";
        cout << "Digite o comprimento do cateto A (cm): ";
        cin >> catetoA;

        if(catetoA <= 0.0)
            break;

        cout << "Digite o comprimento do cateto B (cm): ";
        cin >> catetoB;

        if(catetoB <= 0.0)
            break;

        cout.precision(3);
        fixed(cout);

        cout <<"\n\n A hipotenusa vale aproximadamente " << calcHipotenusa(catetoA, catetoB) << " cm\n";

        system("pause");
        system("cls");


    }while(1);


    return 0;
}

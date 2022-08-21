#include <iostream>
#include <math.h>
using namespace std;

double calcHipotenusa(double cat1, double cat2)
{
    return sqrt((pow(cat1, 2) + pow(cat2, 2)));
}

int main()
{
    double xa, xb, ya, yb;

    cout << "Digite as coordenadas do ponto A\n";

    cout << "Eixo X: ";
    cin >> xa;
    cout << "Eixo Y: ";
    cin >> ya;


    cout << "Digite as coordenadas do ponto B\n";

    cout << "Eixo X: ";
    cin >> xb;
    cout << "Eixo Y: ";
    cin >> yb;

    double cat1 = yb - ya;
    double cat2 = xb - xa;

    cout.precision(3);
    fixed(cout);

    cout << "A distancia entre os pontos A e B eh " << calcHipotenusa(cat1, cat2) << endl;

    return 0;
}

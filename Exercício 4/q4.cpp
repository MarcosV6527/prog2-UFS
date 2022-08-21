#include <iostream>
#include <math.h>
using std::cout;
using std::cin;

struct Triagulo
{

    double a, b, c, s;
    double area();
    Triagulo(int, int, int);

};

double Triagulo::area()
{
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

Triagulo::Triagulo(int A, int B, int C)
{
    a = A;
    b = B;
    c = C;

    s = (a + b + c) / 2;
}

int main()
{

    cout << "Digite as 3 dimensoes do triangulo: ";
    int a, b, c;

    cin >> a >> b >> c;

    Triagulo * t = new Triagulo(a, b, c);
    cout << "Area: " << t->area();



    return 0;
}

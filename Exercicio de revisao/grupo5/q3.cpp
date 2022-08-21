#include <iostream>
#include <math.h>
#include <stdint.h>

using namespace std;

int64_t fatorialRecursivo(int64_t num)
{
    return num > 1 ? fatorialRecursivo(num - 1) * num : num;
}

long double eax(int64_t x)
{
    long double e = 1;
    for(int i = 1; 1; ++i)
    {
        long double r = (pow(x, i)) / (fatorialRecursivo(i));
        if(r < (pow(10, -6)))
            return e;
        e += r;
    }
}

int main()
{

    int64_t x;
    cout << "Entre com o valor de x: ";
    cin >> x;
    cout.precision(200);
    cout << eax(x);

    return 0;
}

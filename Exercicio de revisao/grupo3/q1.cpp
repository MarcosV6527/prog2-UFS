#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    if(num1 < num2)
    {
        for(int i = num1; i <= num2; i++)
        {
            cout << i << endl;
        }
    }
    else if(num1 > num2)
    {
        for(int i = num1; i >= num2; i--)
        {
            cout << i << endl;
        }
    }
    else
    {
        cout << "Valores iguais\n";
    }

    return 0;
}
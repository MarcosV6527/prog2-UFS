#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    int num1;
    int num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "A: " << num1 + num2 << endl;
    cout << "B: " << (num1) * (num2 * num2) << endl;
    cout << "C: " << num1 * num1 << endl;
    cout << "D: " << sqrt((num1*num1) + num2 * num2) << endl;
    cout << "E: " << sin(num1 - num2) << endl;
    int mod_num1 = num1 < 0 ? num1 * -1 : num1;
    cout << "F: " << mod_num1 << endl;


    return 0;
}

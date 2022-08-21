#include <iostream>

using namespace std;

int main()
{
    int metros;
    cout << "Digite um valor em metros: ";
    cin >> metros;

    cout << "Decímetros: " << metros * 10 << endl;
    cout << "Centímetos: " << metros * 100 << endl;
    cout << "Milímetros: " << metros * 1000 << endl;

    return 0;
}

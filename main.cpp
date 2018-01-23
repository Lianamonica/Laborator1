#include <iostream>

using namespace std;

//programul stabileste daca doua numere intregi introduse de la tastatura sunt in ordine crescatoare

int main()
{
    int a,b;
    cout << "Introduceti primul numar: ";
    cin >> a;
    cout << "Introduceti al doilea numar: ";
    cin >> b;
    if (a < b)
        cout << "Numerele sunt in ordine crescatoare." << endl;
    else
        if (a > b)
        cout << "Numerele sunt in ordine descrescatoare." << endl;
        else
            cout << "Numerele sunt egale." << endl;
    return 0;
}

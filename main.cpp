#include <iostream>

using namespace std;

float sumowanie(float a, float b)
{
    return a + b;
}

float roznica(float a, float b)
{
    return a - b;
}

void mnozenie(float a, float b)
{
    cout << "Mnozenie " << a * b << endl;
}
void dzielenie(float a, float b)
{
    if (b ==0)
    {
        cout << "Division by 0!" << endl;
    }
    else
    cout << "dzielenie " << a / b << endl;
}

int main()
{
    int a,b;
    cout << "Podaj a " << endl;     cin >> a;
    cout << "Podaj b " << endl;     cin >> b;

    cout << "dodawanie " << sumowanie(a, b) << endl;
    cout << "odejmowanie " << roznica(a, b) << endl;
    mnozenie(a,b);
    dzielenie(a,b);

    return 0;
}

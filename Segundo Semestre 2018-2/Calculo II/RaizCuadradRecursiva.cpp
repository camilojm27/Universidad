#include <iostream>
#include <tgmath.h>

using namespace std;

long double raiz(int veces, double raizDeN)
{

    if (veces == 1)
    {
        return sqrt(raizDeN);
    }

    else
    {
        raizDeN = sqrt(raizDeN + (raiz(veces - 1, raizDeN)));
        return raizDeN;
    }
}

int main()
{

    int veces;
    double numero = 2;
    cin >> veces;
    double resultado = raiz(veces, numero);
    cout << resultado << endl;
    return 0;
}
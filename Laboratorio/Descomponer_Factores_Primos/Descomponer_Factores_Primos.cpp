/*
    AUTOR: Enmanuel Vladimir Carrasco Paulino

    ENUNCIADO: Descomponer Números en Factores Primos.


    FECHA: 19/6/2025
*/

#include <iostream>
using namespace std;

/*bool SiPrimo(int n) {
    int d = 2;
    bool sp = true;
    while (d < n) {
        if (n % d == 0) {
            sp = false;
        }
        d++;
    }
    return sp;
}
*/

int main() {

    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n < 2) {
        cout << "Debe ingresar un numero mayor o igual a 2." << endl;
        return 1;
    }

    cout << "Factores primos de " << n << " son: ";

    // Dividir entre 2 mientras sea par
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    // Dividir entre impares
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // Si queda un primo mayor que 2
    if (n > 2) {
        cout << n;
    }

    cout << endl;


    return 0;
}
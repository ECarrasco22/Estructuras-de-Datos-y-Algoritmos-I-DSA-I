/*
  AUTOR: Enmanuel Vladimir Carrasco Paulino ID: 1124404

  ENUNCIADO: Programa que genera los primeros N numeros primos usando el algoritmo de Wheel
    Factorization optimizado con patron 6k±1. Complejidad temporal O(n²?n) con
    factor de optimizacion significativo al evaluar solo candidatos 6k-1 y 6k+1.

    FECHA: 23/6/2025

*/

#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int num, int primos[], int cantidad) {
    int limite = sqrt(num);
    for (int i = 0; i < cantidad && primos[i] <= limite; i++) {
        if (num % primos[i] == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros primos que desea generar: ";
    cin >> n;

    int* primos = new int[n];
    int cantidad = 0;

    if (n >= 1)
        primos[cantidad++] = 2;
    if (n >= 2)
        primos[cantidad++] = 3;

    int k = 1;
    while (cantidad < n) {
        int candidato1 = 6 * k - 1;
        int candidato2 = 6 * k + 1;

        if (esPrimo(candidato1, primos, cantidad) && cantidad < n)
            primos[cantidad++] = candidato1;

        if (esPrimo(candidato2, primos, cantidad) && cantidad < n)
            primos[cantidad++] = candidato2;

        k++;
    }

    // Imprimir todos los primos
    for (int i = 0; i < cantidad; i++) {
        cout << primos[i] << " ";
    }

    cout << "\nTotal generados: " << cantidad << endl;

    delete[] primos;
    return 0;
}
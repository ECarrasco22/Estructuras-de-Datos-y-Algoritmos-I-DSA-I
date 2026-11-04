/*
-------------------------------------------------------------------------------------------------------
Tarea: La Flota de Camiones
Materia: IDS343-01-L LAB. ESTRUCTURAS DE DATOS Y ALGORITMOS I
-------------------------------------------------------------------------------------------------------
Descripcion:
   La flota de camiones "La Tortuga" se encarga de transportar mercancías por todo el país.

 Autor:
    Enmanuel Carrasco - 1124404


Fecha: 25/Jun/2025

*/

#include <iostream>
using namespace std;

int main() {
    cout << "=== FLOTA DE CAMIONES 'LA TORTUGA' ===" << endl;
    cout << "Numeros menores a 500 cuyo cuadrado termina en el mismo numero:" << endl << endl;

    int contador = 0;

    for (int n = 1; n < 500; n++) {
        int cuadrado = n * n;

        // Contar dígitos de n y calcular potencia 10^digitos
        int temp = n;
        int potencia = 1;
        while (temp > 0) {
            potencia *= 10;
            temp /= 10;
        }

        int ultimas_cifras = cuadrado % potencia;

        if (ultimas_cifras == n) {
            contador++;
            cout << "Camion " << contador << ": Numero " << n;
            cout << " -> " << n << " = " << cuadrado << endl;
        }
    }

    cout << "\n=== RESUMEN ===" << endl;
    cout << "Total de camiones en la flota: " << contador << endl << endl;

    cout << "Los numeros de los camiones son: ";
    for (int n = 1; n < 500; n++) {
        int cuadrado = n * n;
        int temp = n;
        int potencia = 1;
        while (temp > 0) {
            potencia *= 10;
            temp /= 10;
        }
        int ultimas_cifras = cuadrado % potencia;
        if (ultimas_cifras == n) {
            cout << n << " ";
        }
    }
    cout << endl;

    return 0;
}
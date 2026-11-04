/*AUTOR: ENNMANUEL VLADIMIR CARRASCO PAULINO ID: 1124404

  PROYECTO: Cadena más larga

  FECHA: 23/6/2025
*/

#include <iostream>
using namespace std;

// Función que calcula la longitud de la cadena para un número dado
int calcularLongitudCadena(int numero) {
    int longitud = 1; // Contamos el número inicial
    int actual = numero;

    cout << actual; // Mostramos el número inicial

    while (actual != 4) {
        if (actual % 2 == 0) {
            // Si es par, dividir por 2
            actual = actual / 2;
        }
        else {
            // Si es impar, multiplicar por 3 y sumar 1
            actual = actual * 3 + 1;
        }
        cout << " -> " << actual;
        longitud++;
    }
    cout << endl;

    return longitud;
}

int main() {
    int numeroMasLargo = 1;
    int longitudMaxima = 0;

    cout << "Calculando cadenas para números del 1 al 99...\n" << endl;

    // Probamos con todos los números del 1 al 99
    for (int i = 1; i <= 99; i++) {
        cout << "Número " << i << ": ";
        int longitud = calcularLongitudCadena(i);
        cout << "Longitud: " << longitud << endl << endl;

        // Si esta cadena es más larga, la guardamos
        if (longitud > longitudMaxima) {
            longitudMaxima = longitud;
            numeroMasLargo = i;
        }
    }

    cout << "=== RESULTADO ===" << endl;
    cout << "El numero que genera la cadena más larga es: " << numeroMasLargo << endl;
    cout << "Longitud de la cadena: " << longitudMaxima << endl;

    cout << "\nCadena completa del numero ganador:" << endl;
    calcularLongitudCadena(numeroMasLargo);

    return 0;
}
/*
-----------------------------------------------------------------------------------------
TAREA: Los Floreros de Salvador (LABORATORIO)
Materia: IDS343L-01-LABORATORIO ESTRUCTURAS DE DATOS Y ALGORITMOS I
-----------------------------------------------------------------------------------------


Enunciado: Salvador tenia inicialmente 100 floreros. Vendio 8 floreros y quiere distribuir los floreros restantes cumpliendo las siguientes condiciones:
    Los floreros deben poder agruparse de 6 en 6 sin que sobre ninguno
    Los floreros finales restantes deben poder agruparse de 11 en 11 sin que sobre ninguno
    Encuentra todas las posibles cantidades de floreros que Salvador puede tener al final, considerando que puede regalar o perder algunos floreros adicionales.

Estudiante:

        - Enmanuel V. Carrasco Paulino : 1124404

Fecha: 13/mayo/2025
*/

#include <iostream>

using namespace std;

int main() {
    int vendidos = 8;

    cout << "Soluciones posibles:" << endl;

    // Inicia en 12 (primer múltiplo de 6 >= 8) y salta de 6 en 6
    for (int x = 12; x <= 100; x += 6) {
        // Ya sabemos que 'x' es múltiplo de 6, solo evaluamos la condición del 11
        if (x % 11 == 8) {
            int actuales = x - vendidos;
            cout << "- Tenia: " << x << " floreros -> Ahora tiene: " << actuales << endl;
        }
    }

    return 0;
}
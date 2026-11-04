/*
-----------------------------------------------------------------------------------------
TAREA: Asteriscos (LABORATORIO)
Materia: IDS343L-01-LABORATORIO ESTRUCTURAS DE DATOS Y ALGORITMOS I
-----------------------------------------------------------------------------------------
Descripcion:
    Hacer un programa en C++ que genere un patrón de asteriscos con 7 filas,
    donde cada fila tiene la cantidad de asteriscos correspondiente a su número de fila.

    Fila 1: 1 asterisco.
    Fila 2: 2 asteriscos.
    Y así hasta la fila 7 con 7 asteriscos.

    Resultado:

    *
    **
    ***
    ****
    *****
    ******
    *******

    Restricciones:
        1. Usa bucles for anidados.
        2. Imprime un asterisco a la vez.
        3. No requiere entrada del usuario.

INTEGRANTE:
    Enmanuel Vladimir Carrasco Paulino - 1124404

Fecha: 31/May/2025

*/


#include <iostream>

using namespace std;

int main() {
    // Recorre las 7 filas
    for (int fila = 1; fila <= 7; fila++) {
        // Imprime la cantidad de asteriscos correspondiente a la fila
        for (int col = 1; col <= fila; col++) {
            cout << "*";
            // Bucle vacío para simular pausa (más lento)
            for (int pausa = 0; pausa < 200000000; pausa++);

        }

        // Salto de línea después de cada fila
        for (int salto = 0; salto < 1; salto++) {
            cout << endl;
        }
    }

    return 0;
}
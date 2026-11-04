/*
-------------------------------------------------------------------------------------------------------
Tarea:  Horario y Minutero de un Reloj
Materia: IDS343-01L-LAB. ESTRUCTURAS DE DATOS Y ALGORITMOS I
-------------------------------------------------------------------------------------------------------
Descripción:

   Hacer un programa en C++ que determine cuántas veces se superponen la
   horaria y la minutera en un reloj análogo, indique las horas y minutos en que se superponen
   las manecillas.

   AUTOR: Enmanuel Vladimir Carrasco Paulino ID: 1124404


*/

#include <iostream>
using namespace std;

int main() {

    cout << "Superposiciones de las manecillas (24 horas):\n\n";

    int total = 0;

    for (int ciclo = 0; ciclo < 2; ciclo++) { // 0 = AM, 1 = PM
        for (int h = 0; h < 12; h++) {
            // Evitar duplicar la superposición de las 12:00:00 PM (igual que 00:00:00 AM)
            if (ciclo == 1 && h == 0) continue;

            double minutos = (60.0 * h) / 11.0;

            int hora = h + ciclo * 12;
            int min = (int)minutos;
            int seg = (int)((minutos - min) * 60 + 0.5); // redondeo

            // Ajustes por si hay redondeo hacia 60
            if (seg == 60) {
                min++;
                seg = 0;
            }
            if (min == 60) {
                hora = (hora + 1) % 24;
                min = 0;
            }

            // Imprimir en formato hh:mm:ss con ceros a la izquierda
            cout << "Superposición #" << (++total) << ": ";
            if (hora < 10) cout << "0";
            cout << hora << ":";

            if (min < 10) cout << "0";
            cout << min << ":";

            if (seg < 10) cout << "0";
            cout << seg << endl;
        }
    }

    cout << "\nTotal de superposiciones: " << total << endl;


    return 0;
}
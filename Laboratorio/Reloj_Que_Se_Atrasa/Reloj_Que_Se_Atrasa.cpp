/*
	AUTOR: Enmanuel Vladimir Carrasco Paulino

	ENUNCIADO: El reloj que se atrasa

	  Un reloj se atrasa una cantidad de tiempo distinta en cada hora,
	  de acuerdo con el cuadro siguiente:

	  Hora       Tiempo Atrasado
	  1            1/2   minuto
	  2            1/4   minuto
	  3            2/8   minuto
	  4            3/16  minuto
	  5            5/32  minuto
	  6            8/64  minuto
	  7            13/128  minuto
	  .              .
	  .              .
	  .              .
	  n           f(n)/2^n minuto

	  Donde f(n) es el término enésimo de la serie de Fibonacci, en la cual
	  f(1) = 1, f(2) = 1, f(3) = 2, f(4) = 3, f(5) = 5, f(6) = 8, f(7) = 13, ...
	  y, en general, f(n) = f(n-1) + f(n-2) para todo n >= 3.

	  Cuántos minutos se atrasará el reloj al cabo de 24 horas?

	FECHA: 19/6/2025
*/

#include <iostream>
using namespace std;

int main() {
	int n = 24; // Número de horas
	double atrasado = 0.0; // Tiempo total atrasado en minutos

	// Variables para calcular la serie de Fibonacci
	double f1 = 1.0, f2 = 1.0, fn;

	for (int i = 1; i <= n; ++i) {
		if (i > 2) {
			fn = f1 + f2; // Calcular el término enésimo de Fibonacci
			f1 = f2; // Actualizar f1
			f2 = fn; // Actualizar f2
		}
		else {
			fn = 1.0; // Los dos primeros términos son 1
		}
		atrasado += fn / (1 << i); // Sumar el tiempo atrasado de la hora i
	}
	cout << "El reloj se atrasa " << atrasado << " minutos al cabo de " << n << " horas." << endl;
	return 0;
}
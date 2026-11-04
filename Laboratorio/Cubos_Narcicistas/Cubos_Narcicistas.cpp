/*
	AUTOR: Enmanuel Vladimir Carrasco Paulino

	ENUNCIADO: Son cubos narcisistas aquellos numeros enteros positivos que son exactamente igual a la suma de
	sus dígitos elevados al cubo. Es decir, 370 y 371 son ambos cubos narcisistas.

						370 = 3^3 + 7^3 + 0^3
						371 = 3^3 + 7^3 + 1^3

	Sin embargo, 483 != 4^3 + 8^3 + 3^3

	Excluyendo el caso trivial del número 1, sólo existen otros dos cubos narcisistas.
	¿Cuáles son los cuatro cubos narcisistas?

	FECHA: 4/6/2025

*/

#include <iostream>
#include <cmath>

using namespace std;

bool esCuboNarcisista(int n) {
	int suma = 0, original = n;
	while (n > 0) {
		int digito = n % 10;
		suma += pow(digito, 3);
		n /= 10;
	}
	return suma == original;
}

int main() {

	for (int i = 2; i <= 999; i++) {
		if (esCuboNarcisista(i)) {
			cout << i << " es un cubo narcisista." << endl;
		}
	}


	return 0;
}

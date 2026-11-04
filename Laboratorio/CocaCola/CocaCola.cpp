/*
-----------------------------------------------------------------------------------------
TAREA: CocaCola (LABORATORIO)
Materia: IDS343L-01-LABORATORIO ESTRUCTURAS DE DATOS Y ALGORITMOS I
-----------------------------------------------------------------------------------------

Enunciado. Imprimir números del 1-100, cada vez que un número es múltiplo de 3 se imprime "Coca",
cada vez que es múltiplo de 5 se imprime "Cola" y cada vez que es múltiplo de ambos se imprime "CocaCola".

Autor: Enmanuel Vladimir Carrasco Paulino
Id: 1124404
Fecha: 19/mayo/2025
*/

#include <iostream>

using namespace std;

int main() {

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) {
			cout << "CocaCola" << "\n";
		}
		else if (i % 3 == 0) {
			cout << "Coca" << "\n";
		}
		else if (i % 5 == 0) {
			cout << "Cola" << "\n";
		}
		else {
			cout << i << "\n";
		}
	}



	return 0;
}
/*
	AUTOR: Enmanuel Vladimir Carrasco Paulino

	ENUNCIADO: Serie Fibonacci

		Las series de Fibonacci son sucesiones de números
		que reflejan una interesantísima relación. Constan del conjunto ordenado de cifras
		cuyo valor se forma con la suma de los dos números anteriores,
		lo que da origen a otras relevantes inferencias matemáticas.

	FECHA: 19/6/2025
*/


#include <iostream>
using namespace std;

int main() {

	int Na = 1, Nb = 1, siguiente;

	cout << "Serie Fibonacci" << endl;

	for (int i = 1; i <= 30; i++)
	{
		cout << Na << " ";
		siguiente = Na + Nb;
		Na = Nb;
		Nb = siguiente;
		endl(cout);
	}

	return 0;
}

/*
-----------------------------------------------------------------------------------------
TAREA: La Piramide de Bolas  (LABORATORIO)
Materia: IDS343L-01-LABORATORIO ESTRUCTURAS DE DATOS Y ALGORITMOS I
-----------------------------------------------------------------------------------------
Descripción:
	Con un grupo de 10,000 bolas se forma una pirámide de base cuadrada, con una única bola
	en su vértice superior y un número cuadrado perfecto de ellas en cada capa.
	¿Cuántas capas pueden hacerse? Y ¿Cuántas bolas sobrarán?

INTEGRANTE:
	Enmanuel Vladimir Carrasco Paulino - 1124404

Fecha: 29/May/2025

*/


#include <iostream>

using namespace std;

int main() {
	int bolas = 10000; // Total de bolas
	int capas = 0;     // Contador de capas
	int bolasUsadas = 0; // Contador de bolas usadas


	// Mientras haya suficientes bolas para formar una nueva capa
	while (bolas >= (capas + 1) * (capas + 1)) {
		capas++; // Incrementar el número de capas
		bolasUsadas += capas * capas; // Sumar las bolas usadas en la capa actual
		bolas -= capas * capas; // Restar las bolas usadas del total
	}
	cout << "Capas formadas: " << capas << endl;
	cout << "Bolas sobrantes: " << bolas << endl;
	return 0;
}

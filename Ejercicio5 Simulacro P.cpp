// ConsoleApplication79.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
*/
int main()
{
	// variables
	char asterisco = 42;

	// datos de entrada
	int lado;
	cout << "valor de n : ";
	cin >> lado;

	//logica
	for (int i = 0; i < lado; i++) // for para filas
	{
		for (int j = 0; j < lado; j++) // for para columnas
		{
			if ((i == 0) || (j == 0) || (i == lado - 1) || (j == lado - 1) || (i == j))
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	//datos de salida

	system("pause");
	return 0;
}
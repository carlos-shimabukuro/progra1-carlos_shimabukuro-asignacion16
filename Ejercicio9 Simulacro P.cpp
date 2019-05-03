// ConsoleApplication82.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

/*
TEST

Ingrese el valor de N: -6 Ingrese el valor de N: 1 Ingrese el valor de a: 3.2 Ingrese el
valor de b: 1
Resultado: 1.6

Ingrese el valor de N: 2 Ingrese el valor de a: 1 Ingrese el valor de b: 2.5
Resultado: 0.75
*/
int main()
{
	// variables

	int n;
	float a, b, suma = 0;

	// datos de entrada, logica, datos de salida


	while (1)
	{
		cout << "Ingrese el valor de n : ";
		cin >> n;
		if (0 < n)
		{
			cout << "Ingrese el valor de a : ";
			cin >> a;
			if ((1 <= a) && (a <= 5))
			{
				cout << "Ingrese el valor de b : ";
				cin >> b;

				for (int i = 0; i <= n; i++)
				{
					suma = suma + (pow(a, i * b) / pow(2, i));

				}
				cout << "Suma : " << suma - 1 << endl << endl;

			}
			else
			{
				cout << "Dato incorrectos" << endl << endl;
			}
		}
		else
		{
			cout << "Dato incorrectos" << endl << endl;
		}
	}

	system("pause");
	return 0;
}



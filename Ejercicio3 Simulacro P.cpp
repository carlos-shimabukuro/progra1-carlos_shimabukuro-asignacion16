// ConsoleApplication85.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int factorial(int nN) {
	int fact = 1;
	for (int i = 0; i <= nN; i++)
	{
		fact = fact * i;
	}
	return fact;
}

/*
test
*/
int main()
{
	// variables
	int n;
	float a, suma = 0;
	// datos de entrada, logica, datos de salida
	while (1)
	{
		cout << "Ingrese el valor de n : ";
		cin >> n;
		if ((0 <= n) && (n < 20))
		{
			cout << "Ingrese el valor de a : ";
			cin >> a;

			for (int i = 0; i <= n; i++)
			{
				suma = suma + ((pow(a, i)) / factorial(i));
			}
			cout << "Suma : " << suma << endl << endl;
		}
		else
		{
			cout << "Dato incorrecto" << endl << endl;
		}
	}

	system("pause");
	return 0;
}
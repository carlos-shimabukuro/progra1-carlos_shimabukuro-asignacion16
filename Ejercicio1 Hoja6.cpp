// ConsoleApplication69.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int factorial(int k)
{
	int fact = 1;
	for (int i = 1; i <= k; i++) {
		fact = fact * i;//fact = fact*i
	}
	return fact;
}

/*
test
*/
int main()
{
	// Variables
	float a, b, nN;
	float sumaF;

	// Datos de entrada
	cout << "Ingrese el valor de a : ";
	cin >> a;
	cout << "Ingrese el valor de b : ";
	cin >> b;
	cout << "Ingrese el valor de n : ";
	cin >> nN;

	// Logica
	for (int i = 1; i <= nN; i++)
	{
		double suma = 0;

		suma = suma + (pow(-1, i++)) * (((pow(a, i)) * (pow(b, i++))) / ((a - b) * (factorial(i))));

		cout << "suma : " << suma << endl << endl;

		cout << "Ingrese el valor de a : ";
		cin >> a;
		cout << "Ingrese el valor de b : ";
		cin >> b;
		cout << "Ingrese el valor de n : ";
		cin >> nN;
	}

	// Datos de salida

	system("pause");
	return 0;
}
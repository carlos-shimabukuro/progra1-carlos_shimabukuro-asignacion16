// ConsoleApplication87.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
TEST

Ingrese tipo de noticia: d
Hora de publicación: 14
Origen: N
Ingrese tipo de noticia: E
Hora de publicación: 5
Origen: e
Ingrese tipo de noticia: D
Hora de publicación: 16
Origen: E
Ingrese tipo de noticia: X
Los resultados son:
-----------------------
Noticias de Deporte: 2
Noticias de Actualidad: 0
Noticias de Entretenimiento: 1
En la TARDE se publicaron más noticias
Predominan las noticias del Extranjero

*/
int main()
{
	// variables
	char tipoN, origenN;
	int horaE;

	int depoN = 0, actuN = 0, entreN = 0;
	int madrugada = 0, maniana = 0, tarde = 0, noche = 0;
	int nacionalO = 0, extranjeraO = 0;

	//logica

	while (1)
	{
		cout << "Ingrese  tipo de noticia (D: Deportes; A: Actualidad: E: Entretenimiento) : ";
		cin >> tipoN;
		if ((tipoN == 'D') || (tipoN == 'A') || (tipoN == 'E') || (tipoN == 'X'))
		{
			if (tipoN == 'X')
			{
				cout << endl << endl;
				break;
			}
			cout << "Hora de publicacion (Entero positivo entre 0 y 23) : ";
			cin >> horaE;
			if ((0 <= horaE) && (horaE <= 23))
			{
				cout << "Origen (N: Nacional; E: Extranjera) : ";
				cin >> origenN;
				cout << endl;
				if ((origenN == 'N') || (origenN == 'E'))
				{
					switch (tipoN)
					{
					case 'D':
						depoN++;
						break;
					case 'A':
						actuN++;
						break;
					case'E':
						entreN++;
						break;
					}
					switch (horaE)
					{
					case (0):
					case (1):
					case (2):
					case (3):
					case (4):
					case (5):
						madrugada++;
						break;
					case (6):
					case (7):
					case (8):
					case (9):
					case (10):
					case (11):
					case (12):
						maniana++;
						break;
					case (13):
					case (14):
					case (15):
					case (16):
					case (17):
						tarde++;
						break;
					case (18):
					case (19):
					case (20):
					case (21):
					case (22):
					case (23):
						noche++;
						break;
					}
					switch (origenN)
					{
					case'N':
						nacionalO++;
						break;
					case'E':
						extranjeraO++;
						break;
					}
				}
				else
				{
					cout << "DATO  INVALIDO" << endl << endl;
				}
			}
			else
			{
				cout << "DATO  INVALIDO" << endl << endl;
			}
		}
		else
		{
			cout << "DATO  INVALIDO" << endl << endl;
		}
	}

	//datos de salida

	cout << "CANTIDAD DE NOTICIAS " << endl;
	cout << "Noticias de Deporte : " << depoN << endl;
	cout << "Noticias de Actualidad : " << actuN << endl;
	cout << "Noticias de Entretenimiento : " << entreN << endl << endl;

	if ((madrugada > maniana) && (madrugada > tarde) && (madrugada > noche))
	{
		cout << "En la MADRUGADA se publicaron mas noticias" << endl;
	}
	else
	{
		if ((maniana > madrugada) && (maniana > tarde) && (maniana > noche))
		{
			cout << "En la MANIANA se publicaron mas noticias" << endl;
		}
		else
		{
			if ((tarde > madrugada) && (tarde > maniana) && (tarde > noche))
			{
				cout << "En la TARDE se publicaron mas noticias" << endl;
			}
			else
			{
				cout << "En la NOCHE se publicaron mas noticias" << endl;
			}
		}
	}
	cout << endl;

	if (nacionalO > extranjeraO)
	{
		cout << "Predominan  las noticias del NACIONAL" << endl << endl;
	}
	else
	{
		cout << "Predominan las noticias del Extranjero" << endl << endl;
	}


	system("pause");
	return 0;
}

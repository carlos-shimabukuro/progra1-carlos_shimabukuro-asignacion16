// ConsoleApplication74.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
TEST

Ingrese tipo de emergencia: e
Hora de la emergencia: 14
Origen de la emergencia: 4
Ingrese tipo de emergencia: R
Hora de la emergencia: 16
Origen de la emergencia: n
Ingrese tipo de emergencia: E
Hora de la emergencia: 4
Origen de la emergencia: I
Ingrese tipo de emergencia: f
Los resultados son:
-----------------------
Emergencia ecológica: 2
Emergencia sanitaria: 0
Emergencia radioactiva: 1
En la TARDE se produjeron más emergencias
Predominan las emergencias por intervención del hombre

*/
int main()
{
	// variables
	char tipoE, origenE;
	int horaE;

	int ecologicaE = 0, sanitariaE = 0, radioactivaE = 0;
	int madrugada = 0, maniana = 0, tarde = 0, noche = 0;
	int naturalezaO = 0, intervencionhO = 0;

	//logica

	while (1)
	{
		cout << "Ingrese  tipo de emergencia (E: Ecologica; S: Sanitaria; R: Radioactiva) : ";
		cin >> tipoE;
		if ((tipoE == 'E') || (tipoE == 'S') || (tipoE == 'R') || (tipoE == 'F'))
		{
			if (tipoE == 'F')
			{
				cout << endl << endl;
				break;
			}
			cout << "Hora de la emergencia (Entero positivo entre 0 y 23) : ";
			cin >> horaE;
			if ((0 <= horaE) && (horaE <= 23))
			{
				cout << "Origen de la emergencia (N: Naturaleza; I: Intervención del hombre) : ";
				cin >> origenE;
				cout << endl;
				if ((origenE == 'N') || (origenE == 'I'))
				{
					switch (tipoE)
					{
					case 'E':
						ecologicaE++;
						break;
					case 'S':
						sanitariaE++;
						break;
					case 'R':
						radioactivaE++;
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
					switch (origenE)
					{
					case'N':
						naturalezaO++;
						break;
					case'I':
						intervencionhO++;
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

	cout << "CANTIDAD DE EMERGENCIA " << endl;
	cout << "Emergencia Ecologica : " << ecologicaE << endl;
	cout << "Emergencia Sanitaria : " << sanitariaE << endl;
	cout << "Emergencia Radioactiva : " << radioactivaE << endl << endl;

	if ((madrugada > maniana) && (madrugada > tarde) && (madrugada > noche))
	{
		cout << "En la MADRUGADA se produjeron mas emergencias" << endl;
	}
	else
	{
		if ((maniana > madrugada) && (maniana > tarde) && (maniana > noche))
		{
			cout << "En la MANIANA se produjeron mas emergencias" << endl;
		}
		else
		{
			if ((tarde > madrugada) && (tarde > maniana) && (tarde > noche))
			{
				cout << "En la TARDE se produjeron mas emergencias" << endl;
			}
			else
			{
				cout << "En la NOCHE se produjeron mas emergencias" << endl;
			}
		}
	}
	cout << endl;

	if (naturalezaO > intervencionhO)
	{
		cout << "Predominan  las emergencias por NATURALEZA" << endl << endl;
	}
	else
	{
		cout << "Predominan las emergencias por INTERVENCION DEL HOMBRE" << endl << endl;
	}


	system("pause");
	return 0;
}

// ConsoleApplication86.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*

TEST

*/
int main()
{
	// variables
	char lugarI, tipoD;
	int horaI;

	int limaL = 0, otrarL = 0, otropL = 0;
	int madrugada = 0, maniana = 0, tarde = 0, noche = 0;
	int celularT = 0, tabletT = 0, compT = 0;

	//logica

	while (1)
	{
		cout << "Lugar de ingreso (A: Lima; B: Otra region: C: Otro pais) : ";
		cin >> lugarI;
		if ((lugarI == 'A') || (lugarI == 'B') || (lugarI == 'C') || (lugarI == 'G'))
		{
			if (lugarI == 'G')
			{
				cout << endl << endl;
				break;
			}
			cout << "Hora de ingreso (Entero positivo entre 0 y 23) : ";
			cin >> horaI;
			if ((0 <= horaI) && (horaI <= 23))
			{
				cout << "Tipo de dispositivo (C: Celular; T: Tablet; U: Computador) : ";
				cin >> tipoD;
				cout << endl;
				if ((tipoD == 'C') || (tipoD == 'T') || (tipoD == 'U'))
				{
					switch (lugarI)
					{
					case 'A':
						limaL++;
						break;
					case 'B':
						otrarL++;
						break;
					case 'C':
						otropL++;
						break;
					}
					switch (horaI)
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
					switch (tipoD)
					{
					case'C':
						celularT++;
						break;
					case'T':
						tabletT++;
						break;
					case 'U':
						compT++;
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

	cout << "CANTIDAD DE INGRESOS " << endl;
	cout << "Ingresos de Lima : " << limaL << endl;
	cout << "Ingresos de Otra Region : " << otrarL<< endl;
	cout << "Ingresos de Otro Pais : " << otropL << endl << endl;

	if ((madrugada > maniana) && (madrugada > tarde) && (madrugada > noche))
	{
		cout << "En la MADRUGADA se produjeron mas ingresos" << endl;
	}
	else
	{
		if ((maniana > madrugada) && (maniana > tarde) && (maniana > noche))
		{
			cout << "En la MANIANA se produjeron mas ingresos" << endl;
		}
		else
		{
			if ((tarde > madrugada) && (tarde > maniana) && (tarde > noche))
			{
				cout << "En la TARDE se produjeron mas ingresos" << endl;
			}
			else
			{
				cout << "En la NOCHE se produjeron mas ingresos" << endl;
			}
		}
	}
	cout << endl;

	if ((celularT > tabletT) && (celularT > compT))
	{
		cout << "Predominan  los ingresos desde CELULAR" << endl << endl;
	}
	else
	{
		if ((tabletT > celularT) && (tabletT > compT))
		{
			cout << "Predominan  los ingresos desde TABLET" << endl << endl;
		}
		else
		{
			cout << "Predominan  los ingresos desde COMPUTADORA" << endl << endl;
		}
		;
	}


	system("pause");
	return 0;
}

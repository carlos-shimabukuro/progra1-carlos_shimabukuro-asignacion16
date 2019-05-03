#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//Valores
	int n, i = 1;
	double a, m = 0;

	//Datos de entrada
	cout << "Ingrese el valor de n : ";
	cin >> n;
	cout << "Ingrese el valor de a : ";
	cin >> a;

	//Logica
	if ((1 <= a) && (a <= 6) && (0 < n))
	{
		while (i <= n)
		{
			if (i == 1)
			{
				m = 1 / a;
				i++;
				continue;
			}
			m = m + (1 / (pow(2, i) * a));
			i++;
		}

		//Datos de salida
		cout << "La suma es : " << m << endl;
	}
	else
	{
		cout << "Valores incorrectos" << endl;
	}

	system("pause");
	return 0;
}


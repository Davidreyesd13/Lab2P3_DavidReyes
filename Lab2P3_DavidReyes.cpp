#include <iostream>
#include<stdlib.h>
using namespace std;
int factorial(int, int);
void tringulo(int);
int main()
{
	int opcion, fact, flag, sflag;
	char ale[10]{};
	char afinal[10]{};
	cout << "1.Ejercicio 1\n2.Ejercicio 2\n0.Salir ";
	cin >> opcion;
	while (opcion != 0) {
		switch (opcion) {
		case 1:
			for (int i = 0; i < 10; i++)
			{
				ale[i] = 97 + rand() % (122 + 1 - 97);
			}
			cout << "Arreglo original: ";
			for (int j = 0; j < 10; j++)
			{
				cout << ale[j];
			}
			cout << endl;
			for (int i = 0; i < 10; i++) {

				flag = ale[i];
				for (int j = 0; j < 10; j++) {
					sflag = ale[j];
					if (flag != sflag) {
						afinal[i] = flag;
					}
				}
			}
			for (int j = 0; j < 10; j++)
			{
				cout << afinal[j];
			}
			break;
		case 2:
			cout << "ingrese el numero que desea saber su factorial: ";
			cin >> fact;
			cout << "factorial:" << factorial(fact, 1) << endl;
			tringulo(factorial(fact, 1));
			break;
		}
		cout << "1.Ejercicio 1\n2.Ejercicio 2\n0.Salir ";
		cin >> opcion;
	}

}
int factorial(int num, int result) {
	;
	if (num == 0) {
		result *= 1;
		return result;
	}
	else {
		result *= num;
		return factorial(num - 1, result);
	}
}
void tringulo(int tam) {
	for (int i = 0; i <= tam; i++)
	{
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}



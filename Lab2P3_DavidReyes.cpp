#include <iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int factorial(int, int);
void tringulo(int);
int main()
{
	srand(time(NULL));
	int opcion, fact,temp = 0,cont=0;
	bool flag = true;
	int arregloaleatorio[10]{}, arreglofinal[10]{};
	cout << "1.Ejercicio 1\n2.Ejercicio 2\n0.Salir ";
	cin >> opcion;
	while (opcion != 0) {
		switch (opcion) {
		case 1:
			for (int i = 0; i < 10; i++)
			{
				arregloaleatorio[i] = 97 + rand() % (122 + 1 - 97);
			}
			cout << "Arreglo original: ";
			for (int j = 0; j < 10; j++)
			{
				cout << (char)arregloaleatorio[j];
			}
			cout << endl;
			//meotodo para ordenar
			for (int i = 0; i < 10; i++) {
				for (int j = i + 1; j < 10; j++)
				{
					if (arregloaleatorio[j] < arregloaleatorio[i]) {
						temp = arregloaleatorio[i];
						arregloaleatorio[i] = arregloaleatorio[j];
						arregloaleatorio[j] = temp;
						
					}
				}
				
			}
			//validacion de repeticion
			cont = 0;
			for (int i = 0; i < 10; i++){
				
					if (arregloaleatorio[i]!=arregloaleatorio[i+1]) {
						arreglofinal[cont] = arregloaleatorio[i];
						cont++;
					}
			}
			cout << "Arreglo final: " ;
			for (int j = 0; j < 10; j++)
			{
				cout << (char)arreglofinal[j];
			}
			cout << endl;
			for (int i = 0; i <10; i++)
			{
	
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

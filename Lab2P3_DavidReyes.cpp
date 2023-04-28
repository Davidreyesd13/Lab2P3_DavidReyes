#include <iostream>
using namespace std;
int factorial(int,int);
void tringulo(int);
int main()
{
	int opcion,fact;
	cout << "1.Ejercicio 1\n2.Ejercicio 2\n0.Salir ";
	cin >> opcion;
	while (opcion!=0) {
		switch (opcion) {
		case 1:
			
			break;
		case 2:
			cout << "ingrese el numero que desea saber su factorial: ";
			cin >> fact;
			cout << "factorial:"<<factorial(fact,1)<<endl;
			tringulo(factorial(fact, 1));
			break;
		}
		cout << "1.Ejercicio 1\n2.Ejercicio 2\n0.Salir ";
		cin >> opcion;
   }
	
}
int factorial(int num,int result) {
	;
	if (num == 0) {
		result *= 1;
		return result;
	}
	else {
		result *= num ;
		return factorial(num-1, result);
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

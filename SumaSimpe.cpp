#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2, resultado;
	cout << "Ingrese un numero: ";
	cin >> num1; //console in, es para recibir valores
	cout << "Ingrese otro numero: ";
	cin >> num2;
	
	resultado = num1 + num2;
	
	cout << "El resultado es: " << resultado;
	
	return 0;
}


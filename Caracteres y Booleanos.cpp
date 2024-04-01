#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//es una variable que soporta mas decimales que el float
	double num1;
	//character, almacenan un unico caracter o letra.
	//Tabla de codigos ascii
	//las variables char si diferencian entre mayuscula y minuscula
	char caracter1;
	
	cout << "Este es un texto" << endl;
	cin >> caracter1; //solo va a tomar la primera letra que haya
	
	if (caracter1 == 'a' || caracter1 == 'e' ||  caracter1 == 'i' || caracter1 == 'o' || caracter1 == 'u') {
		cout << "Se ingreso una vocal" << endl;
	}
	//boolean, solo puede ser verdadero (1, true) o falso (0, false). 
	bool booleana1 = true;
	if (caracter1 == 'e') {
		booleana1 = false;
	} 
	
	if (booleana1 == true) {
		cout << "No se ingreso una e";
	} else {
		cout << "Si se ingreso una e";
	}
	return 0;
}


/*
Ejercicio 4: Ejecute el programa del ejercicio anterior con entradas
erróneas y observe los resultados. Por ejemplo, introduzca un dato de
tipo carácter cuando se espera un dato de tipo entero.
*/

#include<iostream>
using namespace std;

int main()
{
	int edad;
	char sexo[10];
	float altura;

	cout << "Introduzca Edad: " << endl; cin >> edad;
	cout << "Introduzca Sexo: " << "\n"; cin >> sexo;
	cout << "Ontroduzca Altura en metros: " << endl; cin >> altura;

	cout << "\nEdad: " << edad << "." << endl;
	cout << "Sexo: " << sexo << "." << "\n";
	cout << "Altura: " << altura << "m" << endl;

	return 0;
}
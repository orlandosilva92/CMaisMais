#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*Crie um algoritmo que solicite ao usu�rio um n�mero inteiro
	e depois imprima na tela se este n�mero � positivo ou negativo*/
	
	int numero;
	string resultado;
	
	cout << "Digite um n�mero: \n";
	cin >> numero;
	
	(numero < 0) ? resultado = "O n�mero que voce digitou � negativo.\n" : resultado = "O n�mero que voce digitou � positivo.\n";
	
	cout << "------------------------------------\n";
	cout << resultado;
	
	
	system("pause");
	return 0;
}

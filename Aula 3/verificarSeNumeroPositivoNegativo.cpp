#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*Crie um algoritmo que solicite ao usuário um número inteiro
	e depois imprima na tela se este número é positivo ou negativo*/
	
	int numero;
	string resultado;
	
	cout << "Digite um número: \n";
	cin >> numero;
	
	(numero < 0) ? resultado = "O número que voce digitou é negativo.\n" : resultado = "O número que voce digitou é positivo.\n";
	
	cout << "------------------------------------\n";
	cout << resultado;
	
	
	system("pause");
	return 0;
}

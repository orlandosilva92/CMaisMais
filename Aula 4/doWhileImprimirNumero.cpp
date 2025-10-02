#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Solicite que o usuário digite um número inteiro e imprima na sequencia o quadrado do número digitado. 
	Repita isso até que o número digitado seja "0"
	*/
	
	int numero = 1,quadrado;
	
	do{
		cout << "Digite um número:\n";
		cin >> numero;
		quadrado = numero * numero;
		cout << "O quadrado do número " << numero << " é: " << quadrado << ".\n";
		
	}while(numero != 0);
	
	system("pause");
	return 0;
}

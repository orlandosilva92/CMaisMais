#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Solicite que o usu�rio digite um n�mero inteiro e imprima na sequencia o quadrado do n�mero digitado. 
	Repita isso at� que o n�mero digitado seja "0"
	*/
	
	int numero = 1,quadrado;
	
	do{
		cout << "Digite um n�mero:\n";
		cin >> numero;
		quadrado = numero * numero;
		cout << "O quadrado do n�mero " << numero << " �: " << quadrado << ".\n";
		
	}while(numero != 0);
	
	system("pause");
	return 0;
}

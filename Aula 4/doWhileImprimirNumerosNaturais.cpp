#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Crie um algoritmo que solicite um n�mero inteiro positivo
	ao usu�rio e depois imprima X vezes os n�metos naturais impares
	*/

	int numero,contador = 0,impar = 1;
	
	cout << "Digite um n�mero inteiro:\n";
	cin >> numero;
	
	while(contador < numero){
		
		cout << "\n" << impar << "\n";
		impar = impar + 2;
		
		contador++;
	}
	
	system("pause");
	return 0;
}

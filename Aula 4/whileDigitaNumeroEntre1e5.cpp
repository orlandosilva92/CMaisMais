#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Crie um algoritmo que solicite ao usu�rio um n�mero inteiro, e
	s� saia da rotina quando o usu�rio digitar um n�mero entre 1 e 5.
	*/
	
	int contador = 0;
	
	while(contador <= 1 || contador >= 5){
		
		cout << "Digite um n�mero \n\n";
		cin >> contador;
		
	}
	
	cout << "Voce digitou o n�mero: " << contador << ".\n";
	
	system("pause");
	return 0;
}

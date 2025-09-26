#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Crie um algoritmo que solicite ao usuário um número inteiro, e
	só saia da rotina quando o usuário digitar um número entre 1 e 5.
	*/
	
	int contador = 0;
	
	while(contador <= 1 || contador >= 5){
		
		cout << "Digite um número \n\n";
		cin >> contador;
		
	}
	
	cout << "Voce digitou o número: " << contador << ".\n";
	
	system("pause");
	return 0;
}

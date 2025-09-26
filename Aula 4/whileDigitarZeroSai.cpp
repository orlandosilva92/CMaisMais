#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Crie um algoritmo que solicite ao usuário um número inteiro maior que zero
	e só saia da rotina quando o usuário digitar o valor 0(zero)
	caso o usuário não digite o valor 0(zero) o algoritmo solicitara
	a entrada de um novo número
	*/
	
	int contador = 1;
	
	while (contador > 0){
		
		cout << "Digite um número\n";
		cin >> contador;
		cout << "Número digitado: " << contador << "\n";
		
			if(contador == 0){
				break;
			}
			
	}
	
	cout << "\nVocê digitou o número zero (0). \nPrograma encerrado.\n";
	
	system("pause");
	return 0;
}

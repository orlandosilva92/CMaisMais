#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Crie um algoritmo que solicite ao usu�rio um n�mero inteiro maior que zero
	e s� saia da rotina quando o usu�rio digitar o valor 0(zero)
	caso o usu�rio n�o digite o valor 0(zero) o algoritmo solicitara
	a entrada de um novo n�mero
	*/
	
	int contador = 1;
	
	while (contador > 0){
		
		cout << "Digite um n�mero\n";
		cin >> contador;
		cout << "N�mero digitado: " << contador << "\n";
		
			if(contador == 0){
				break;
			}
			
	}
	
	cout << "\nVoc� digitou o n�mero zero (0). \nPrograma encerrado.\n";
	
	system("pause");
	return 0;
}

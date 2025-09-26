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
	
	Ap�s o usu�rio digitar o valor zero(0) o algoritmo dever� imprimir
	a quantidade de numeros que foram digitados e a m�dia destes n�meros
	*/
	
	int contador = 1,soma = 0,media,quantidade = 0;
	
	while (contador > 0){
		
		cout << "Digite um n�mero\n";
		cin >> contador;
		cout << "N�mero digitado: " << contador << "\n";
		soma += contador;//aqui vai somando todos os n�meros que j� foram digitados
		quantidade++;//aqui � possivel contar quantos n�meros foram digitados, pois toda vez que � digitado um n�mero � incrementado +1
		
			if(contador == 0){
				break;
			}
			
	}
	media = soma/quantidade;
	cout << "Foram digitados " << quantidade << " n�meros.\n";
	cout << "A m�dia desses n�meros �: " << media << ".\n";
	cout << "\nVoc� digitou o n�mero zero (0). \nPrograma encerrado.\n";
	
	system("pause");
	return 0;
}

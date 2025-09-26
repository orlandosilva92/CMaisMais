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
	
	Após o usuário digitar o valor zero(0) o algoritmo deverá imprimir
	a quantidade de numeros que foram digitados e a média destes números
	*/
	
	int contador = 1,soma = 0,media,quantidade = 0;
	
	while (contador > 0){
		
		cout << "Digite um número\n";
		cin >> contador;
		cout << "Número digitado: " << contador << "\n";
		soma += contador;//aqui vai somando todos os números que já foram digitados
		quantidade++;//aqui é possivel contar quantos números foram digitados, pois toda vez que é digitado um número é incrementado +1
		
			if(contador == 0){
				break;
			}
			
	}
	media = soma/quantidade;
	cout << "Foram digitados " << quantidade << " números.\n";
	cout << "A média desses números é: " << media << ".\n";
	cout << "\nVocê digitou o número zero (0). \nPrograma encerrado.\n";
	
	system("pause");
	return 0;
}

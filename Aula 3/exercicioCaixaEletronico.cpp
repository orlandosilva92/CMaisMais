#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	/*
	Crie um algoritmo que simule um caixa eletronico
	o algoritmo tem que solicitar que o usuário digite o valor 
	que deseja sacar. Esse valor deve ser entre 2 e 2.000 reais.
	
	Após isso, imprima na tela quantas notas de 2,5,10,50,100 e 200 reais
	são necessárias para completar o valor do saque
	*/
	
	int valorSaque,restoSaque,qtdCedulas;
	
	cout << "Digite o valor que deseja sacar. \n\n";
	cin >> valorSaque;
	
	if(qtdCedulas = valorSaque / 200){
		cout << qtdCedulas << " notas de R$200,00. \n";
		restoSaque = valorSaque - (qtdCedulas * 200);
	}if(qtdCedulas = restoSaque / 100){
		cout << qtdCedulas << " notas de R$100,00. \n";
		restoSaque = restoSaque - (qtdCedulas * 100);
	}if(qtdCedulas = restoSaque / 50){
		cout << qtdCedulas << " notas de R$50,00. \n";
		restoSaque = restoSaque - (qtdCedulas * 50);
	}if(qtdCedulas = restoSaque / 10){
		cout << qtdCedulas << " notas de R$10,00. \n";
		restoSaque = restoSaque - (qtdCedulas * 10);
	}if(qtdCedulas = restoSaque / 5){
		cout << qtdCedulas << " notas de R$5,00. \n";
		restoSaque = restoSaque - (qtdCedulas * 5);
	}if(qtdCedulas = restoSaque / 2){
		cout << qtdCedulas << " notas de R$2,00. \n";
		restoSaque = restoSaque - (qtdCedulas * 2);
	}
	
	system("pause");
	return 0;
}

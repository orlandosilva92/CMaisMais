#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//como contar de 1 ate 10
	
	int contador = 1;
	
	while(contador <= 10){
		
		cout << contador << "\n";
		
		contador ++;
	}
	
	//como contar de 10 ate 1
	
	contador = 10;
	
	while (contador >= 1){
		
		cout << contador << "\n";
		
		contador --;
	}
	
	//peça 4 notas e retorne a média
	
	contador = 1;
	double nota,media;
	double soma = 0.0;
	
	while (contador <= 4){
		
		cout << "Digite a nota da " << contador << " unidade.\n";
		cin >> nota;
		soma += nota;
		contador ++;
	}
	media = soma/4;
	cout << "\nSua média é: " << media << "\n";
	
	system("pause");
	return 0;
}

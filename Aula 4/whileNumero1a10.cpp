#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//Escreva uma algoritmo que exiba os números de 1 a 10
	
	int contador = 1;
	
	while(contador <= 10){
		
		cout << "Número: " << contador << "\n";
		contador++;
	}
	
	system("pause");
	return 0;
}

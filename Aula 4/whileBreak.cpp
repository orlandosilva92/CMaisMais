#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int contador = 1;
	
	while(contador < 100){
		
		cout << "Número: " << contador << "\n";
			//Esse comando IF dentro do while faz com que quando cheguemos ao valor informador, o while seja pulado para fora
			if(contador == 5){
				break;
			}
			
	contador++;
	}
	
	system("pause");
	return 0;
}

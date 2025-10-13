#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	//for = para
	//(condição inicial;teste;incremento ou decremento)
	for(numero = 1;numero < 11;numero++){
		
		cout << numero;
		
	}
	
	system("pause");
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//DO = Fa�a
	//Whille = enquanto
	//A diferen�a entre o WHILLE e o DO WHILLE � que antes de testar a condi��o no DO WHILE � rodado o c�digo antes e depois testa
	//na proxima vez que o c�digo roda
	
	int contador = 1;
	
	do{		
		cout << "N�mero = " << contador << "\n";
		contador++;
	}while(contador < 6);//rodou o DO, ai testa o WHILE, se a condi��o for verdadeira roda o programa de novo, se nao, o programa s� roda 1 vez
	
	system("pause");
	return 0;
}

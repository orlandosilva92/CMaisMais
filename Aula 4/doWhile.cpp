#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//DO = Faça
	//Whille = enquanto
	//A diferença entre o WHILLE e o DO WHILLE é que antes de testar a condição no DO WHILE é rodado o código antes e depois testa
	//na proxima vez que o código roda
	
	int contador = 1;
	
	do{		
		cout << "Número = " << contador << "\n";
		contador++;
	}while(contador < 6);//rodou o DO, ai testa o WHILE, se a condição for verdadeira roda o programa de novo, se nao, o programa só roda 1 vez
	
	system("pause");
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Crie uma algoritmo que solicite ao usu�rio que digite uma letra,
	ap�s isso verifique se a letra digitada � vogal ou consoante
	e imprima na tela o resultado
	*/
	
	char letra;
	
	cout << "Digite uma letra. \n\n";
	cin >> letra;
	
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ){
		cout << "A letra '" << letra << "' � uma vogal.\n\n";
	}else if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ){
		cout << "A letra '" << letra << "' � uma vogal.\n\n";	
	}else{
		cout << "A letra '" << letra << "' � uma consoante.\n\n";
	}
	
	system("pause");
	return 0;
}

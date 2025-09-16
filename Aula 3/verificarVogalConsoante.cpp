#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Crie uma algoritmo que solicite ao usuário que digite uma letra,
	após isso verifique se a letra digitada é vogal ou consoante
	e imprima na tela o resultado
	*/
	
	char letra;
	
	cout << "Digite uma letra. \n\n";
	cin >> letra;
	
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ){
		cout << "A letra '" << letra << "' é uma vogal.\n\n";
	}else if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ){
		cout << "A letra '" << letra << "' é uma vogal.\n\n";	
	}else{
		cout << "A letra '" << letra << "' é uma consoante.\n\n";
	}
	
	system("pause");
	return 0;
}

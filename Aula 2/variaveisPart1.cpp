#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	//Variaveis são um espaço na memória onde vamos guarda um espaço na memória temporariamente
	int numerosInteiros = 3;
	double numerosDecimais = 9.99;
	char umaLetra = 'a';
	string textos = "Aluno: Orlando";
	bool trueOrFalse = false;
	
	cout << numerosInteiros << "\n";
	cout << numerosDecimais << "\n";
	cout << umaLetra << "\n";
	cout << textos << "\n";
	cout << trueOrFalse << "\n";	
	
	return 0;
}

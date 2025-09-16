#include <iostream>
#include <locale.h>
using namespace std;

//As variaveis globais ficam fora das funções e podem ser acessadas de dentro da função
double nota1,nota2;

int main(){
	setlocale(LC_ALL,"");
	
	//As variaveis locais ficam dentro da função e só podem ser acessadas internamente
	double nota3,nota4,media;
	
	nota1 = 10.0;
	nota2 = 7.0;
	nota3 = 8.5;
	nota4 = 10.0;
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	cout << "A média do aluno é: " << media <<"\n\n";
		
	system("pause");
	return 0;
}

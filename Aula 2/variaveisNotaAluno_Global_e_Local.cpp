#include <iostream>
#include <locale.h>
using namespace std;

string nome;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double nota1,nota2,nota3,nota4,media;
	
	cout << "Digite o seu nome: \n\n";
	getline(cin,nome);
	
	cout << "Digite a primeira nota\n";
	cin >> nota1;
	cout << "Digite a primeira nota\n";
	cin >> nota2;
	cout << "Digite a primeira nota\n";
	cin >> nota3;
	cout << "Digite a primeira nota\n";
	cin >> nota4;
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	cout << "A média do aluno " << nome << " é: " << media << ".\n\n";
		
	system("pause");
	return 0;
}

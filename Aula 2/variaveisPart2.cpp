#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	string nome;
	int idade;
	
	cout << "Digite seu nome: \n";//c+out para mostrar na tela
	//cin >> nome; c+in para armazenar. Obs.: Forma com apenas o primeiro nome
	getline(cin,nome);//get+line para receber tudo que esta na linha. Para aceitar dois ou mais nomes
	
	cout << "Digite sua idade: \n";
	cin >> idade;
	
	cout << "-----------------------------------------\n";
	cout << "O seu nome �: " << nome << "\n";//Para concatenar usa-se <<  , ou para receber um dado na vari�vel usa-se >>
	cout << "Sua idade �: " << idade << "\n";
	
	system("pause");//Usado para quando o .exe for executado a tela n�o feche automaticamente depois de aberta
	return 0;
}

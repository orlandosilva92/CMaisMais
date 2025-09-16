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
	cout << "O seu nome é: " << nome << "\n";//Para concatenar usa-se <<  , ou para receber um dado na variável usa-se >>
	cout << "Sua idade é: " << idade << "\n";
	
	system("pause");//Usado para quando o .exe for executado a tela não feche automaticamente depois de aberta
	return 0;
}

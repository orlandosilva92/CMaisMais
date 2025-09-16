#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	/*
	Crie um algoritmo que solicite so usuário uma letra de pois verifique se a letra digita é "F" ou "M"
	*/
	
	char letra;
	string resultado;
	
	cout << "Digite uma letra F para Feminino ou M para Masculino\n\n";
	cin >> letra;
	
	(letra == 'F') ? resultado = "Você é do sexo feminino.\n" : (letra == 'M') ? resultado = "Você é do sexo masculino.\n" : resultado = ("Sexo invalido.\n");
	
	cout << "--------------------------------------\n\n";
	cout << "A letra escolhida foi: " << letra << ".\n";
	cout << resultado << "\n";
	cout << "--------------------------------------\n\n";
	
	//Outra forma de realizar usando if else
	if(letra == 'F'){
		cout << "Você é do sexo feminino.\n";
	}else if(letra == 'M'){
		cout << "Você é do sexo masculino.\n";
	}else{
		cout << "Sexo invalido.\n";
	}
	
	system("pause");
	return 0;
}

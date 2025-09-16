#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	/*
	Crie um algoritmo que solicite so usu�rio uma letra de pois verifique se a letra digita � "F" ou "M"
	*/
	
	char letra;
	string resultado;
	
	cout << "Digite uma letra F para Feminino ou M para Masculino\n\n";
	cin >> letra;
	
	(letra == 'F') ? resultado = "Voc� � do sexo feminino.\n" : (letra == 'M') ? resultado = "Voc� � do sexo masculino.\n" : resultado = ("Sexo invalido.\n");
	
	cout << "--------------------------------------\n\n";
	cout << "A letra escolhida foi: " << letra << ".\n";
	cout << resultado << "\n";
	cout << "--------------------------------------\n\n";
	
	//Outra forma de realizar usando if else
	if(letra == 'F'){
		cout << "Voc� � do sexo feminino.\n";
	}else if(letra == 'M'){
		cout << "Voc� � do sexo masculino.\n";
	}else{
		cout << "Sexo invalido.\n";
	}
	
	system("pause");
	return 0;
}

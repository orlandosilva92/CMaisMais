#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
		
	string nome,sexo;
	double valorIngresso = 12;
	
	cout << "Qual o seu nome?\n";
	cin >> nome;	
	cout << "Qual o seu sexo?\n";
	cin >> sexo;
	
	if(sexo == "Masculino" or "masculino"){
		cout << "----------- Comprovante de entrada -------------\n";
		cout << "nome: " << nome << ".\n";
		cout << "Valor a ser pago R$ " << valorIngresso << ",00.\n";
		cout << "------------------ Bom evento ------------------\n";
	}else if (sexo == "Feminino" or "feminino"){
		cout << "----------- Comprovante de entrada -------------\n";
		valorIngresso = valorIngresso/2;
		cout << "nome: " << nome << ".\n";
		cout << "Valor a ser pago R$ " << valorIngresso << ",00.\n";
		cout << "------------------ Bom evento ------------------\n";				
	}else{
		cout << "----------- Comprovante de entrada -------------\n";
		cout << "Sexo não encontrado.\n";
	}	
	system("pause");
	return 0;
}

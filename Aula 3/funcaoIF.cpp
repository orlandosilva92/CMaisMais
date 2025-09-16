#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int num1 = 20, num2 = 10;
	string fruta = "Maçã";
	
	//IF = SE	
	if( num1 > 5 ){
		
		cout << "-----------Resultado IF nº1 e nº2-----------\n";
		cout << "O número é maior que 5.\n";
		
	}else{
		cout << "-----------Resultado IF nº1 e nº2-----------\n";
		cout << "O número é menor que 5.\n";
	}	
	if( num1 > num2 ){		
		cout << "\n-----------Resultado IF nº1 e nº2-----------\n";
		cout << "O primeiro número é maior que o segundo número.\n";		
	}else{		
		cout << "-----------Resultado IF nº1 e nº2-----------\n";
		cout << "O segundo número é maior que o primeiro.\n";		
	}	
	if ( fruta == "Maçã" ){		
		cout << "\n-----------Resultado IF fruta-----------\n";
		cout << "É realmente uma mação.\n";		
	}else{
		cout << "\n-----------Resultado IF fruta-----------\n";
		cout << "A fruta não é mação.\n";
		cout << "A fruta é: " << fruta << ".\n";	
	}		
	system("pause");
	return 0;
}

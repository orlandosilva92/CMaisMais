#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int num1 = 20, num2 = 10;
	string fruta = "Ma��";
	
	//IF = SE	
	if( num1 > 5 ){
		
		cout << "-----------Resultado IF n�1 e n�2-----------\n";
		cout << "O n�mero � maior que 5.\n";
		
	}else{
		cout << "-----------Resultado IF n�1 e n�2-----------\n";
		cout << "O n�mero � menor que 5.\n";
	}	
	if( num1 > num2 ){		
		cout << "\n-----------Resultado IF n�1 e n�2-----------\n";
		cout << "O primeiro n�mero � maior que o segundo n�mero.\n";		
	}else{		
		cout << "-----------Resultado IF n�1 e n�2-----------\n";
		cout << "O segundo n�mero � maior que o primeiro.\n";		
	}	
	if ( fruta == "Ma��" ){		
		cout << "\n-----------Resultado IF fruta-----------\n";
		cout << "� realmente uma ma��o.\n";		
	}else{
		cout << "\n-----------Resultado IF fruta-----------\n";
		cout << "A fruta n�o � ma��o.\n";
		cout << "A fruta �: " << fruta << ".\n";	
	}		
	system("pause");
	return 0;
}

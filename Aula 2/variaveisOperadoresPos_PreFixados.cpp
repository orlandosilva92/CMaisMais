#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int num1 = 10;
	
	cout << "--------Valor Inicial--------\n";
	cout << "N�mero = " << num1 << "\n";
	
	//Multiplica o valor inicial por 2
	cout << "--------Multiplica Inicial--------\n";
	num1 *= 2;
	cout << "N�mero = " << num1 << "\n";	
	
	//Dividir o valor inicial por 2
	cout << "--------Dividir Inicial--------\n";
	num1 /= 2;
	cout << "N�mero = " << num1 << "\n";
	
	//P�s fixado
	num1 = 10;
	cout << "--------P�s fixado--------\n";
	cout << "Numero = " << num1 << "\n";	
	cout << "Numero = " << num1++ << "\n"; 	
	cout << "Numero = " << num1 << "\n";
	
	//Pre fixado
	num1 = 10;
	cout << "--------Pre fixado--------\n";
	cout << "Numero = " << num1 << "\n";	
	cout << "Numero = " << ++num1 << "\n";		
	
	system("pause");
	return 0;
}

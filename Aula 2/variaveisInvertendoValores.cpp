#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int num1 = 10;
	
	//1� forma de inverter
	cout << "O n�mero 1 = " << num1 << "\n";
	
	cout << "---------------Invertendo valores 1---------------\n\n";
	num1 = num1 * -1;
	cout << "O n�mero 1 = " << num1 << "\n";
	
	num1 = 10;
	//2� forma de inverter
	cout << "---------------Invertendo valores 2---------------\n\n";
	cout << "O n�mero 1 = " << num1 << "\n";
	cout << "Valor invertido = " << -num1 << "\n";
	
	num1 = 10;
	//3� forma de inverter
	cout << "---------------Invertendo valores 3---------------\n\n";
	cout << "O n�mero 1 = " << num1 << "\n";
	num1 =- num1;
	cout << "Valor invertido = " << num1 << "\n";

	
	system("pause");
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int num1,num2,num3,calc;
	
	cout << "Digite um número: \n";
	cin >> num1;
	cout << "Digite um número: \n";
	cin >> num2;
	cout << "Digite um número: \n";
	cin >> num3;	
	
	
	calc = (num1 * 2)+(num2/2);
	cout << "O dobro do primeiro número mais a metade do segundo número = " << calc << "\n";
	calc = (num1 * 3)+num3;
	cout << "O triplo do primeiro número mais o terceiro número = " << calc << "\n";
	calc = num3 * 2;
	cout << "O dobro do terceiro número = " << calc << "\n";
	
	system("pause");
	return 0;
}

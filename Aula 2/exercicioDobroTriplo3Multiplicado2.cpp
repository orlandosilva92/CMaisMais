#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int num1,num2,num3,calc;
	
	cout << "Digite um n�mero: \n";
	cin >> num1;
	cout << "Digite um n�mero: \n";
	cin >> num2;
	cout << "Digite um n�mero: \n";
	cin >> num3;	
	
	
	calc = (num1 * 2)+(num2/2);
	cout << "O dobro do primeiro n�mero mais a metade do segundo n�mero = " << calc << "\n";
	calc = (num1 * 3)+num3;
	cout << "O triplo do primeiro n�mero mais o terceiro n�mero = " << calc << "\n";
	calc = num3 * 2;
	cout << "O dobro do terceiro n�mero = " << calc << "\n";
	
	system("pause");
	return 0;
}

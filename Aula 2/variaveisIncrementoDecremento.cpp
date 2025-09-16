#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int a = 10, b = 20;
	
	//Incremento ++
	cout << "Valor inicial = " << a << "\n";
	a++;
	cout << "Valor incrementado = " << a << "\n";
	
	//Decremento --
	cout << "Valor inicial = " << a << "\n";
	a--;
	cout << "Valor incrementado = " << a << "\n";	
	
	//Receber voce mesmo mais algo +=
	cout << "Valor inicial = " << a << "\n";
	a += b;
	cout << "Valor incrementado + b = " << a << "\n";	
	
	//Diminuit voce mesmo mais algo -=
	cout << "Valor inicial = " << a << "\n";
	a -= b;
	cout << "Valor incrementado - b = " << a << "\n";
		
	system("pause");
	return 0;
}

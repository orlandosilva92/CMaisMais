#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Crie um algoritmo que solicite ao usuário a entrada de 3 números
	e depois imprima-os na tela em orden descrescente
	*/
	
	int num1,num2,num3;
	
	cout << "Digite um número. \n";
	cin >> num1;
	cout << "Digite um número. \n";
	cin >> num2;
	cout << "Digite um número. \n";
	cin >> num3;	
	
    if (num1 >= num2 && num2 >= num3) {
        cout << num1 << " " << num2 << " " << num3;
    } else if (num1 >= num3 && num3 >= num2) {
        cout << num1 << " " << num3 << " " << num2;
    } else if (num2 >= num1 && num1 >= num3) {
        cout << num2 << " " << num1 << " " << num3;
    } else if (num2 >= num3 && num3 >= num1) {
        cout << num2 << " " << num3 << " " << num1;
    } else if (num3 >= num1 && num1 >= num2) {
        cout << num3 << " " << num1 << " " << num2;
    } else {
        cout << num3 << " " << num2 << " " << num1;
    }

	system("pause");
	return 0;
}

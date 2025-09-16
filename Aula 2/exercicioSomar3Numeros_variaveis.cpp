#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");//Para acentuação
	
	int num1,num2,num3,soma;//declarar variaveis
	
	cout << "Digite um número: \n";//c+out
	cin >> num1;//c+in
	
	cout << "Digite um número: \n";
	cin >> num2;
	
	cout << "Digite um número: \n";
	cin >> num3;
	
	soma = num1+num2+num3;//calcula os valores e atribui a "soma"
	
	cout << "\n\nA soma é igual a: " << soma <<"\n";
	
	system("pause");
	return 0;
}

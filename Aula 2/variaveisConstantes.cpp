#include <iostream>
#include <locale.h>
using namespace std;

//Constante(valor fixo):
#define nome cout << "Meu nome é Orlando, sou aluno do curso de programação\n\n";
#define pi 3.14159

int main(){
	setlocale(LC_ALL,"");
	
	nome//chama a constante la de fora
	
	cout << "O valor de pi é " << pi << "\n\n";//o "pi" chama a constante la de fora
	
	
	system("pause");
	return 0;
}

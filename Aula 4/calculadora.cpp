#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Crir um algoritmo que solicite ao usuário a entrada de dois números
	e a operação que ele deseja executar(soma, subtração, divisão ou multiplicação).
	Logo em seguida, o algoritmo deve ler os dois números da operação e apresentar
	o resultado na tela.
	*/
	
	int opcao,num1,num2,calculo;
	
	cout << "1 - Soma\n";
	cout << "2 - Subtraçao\n";
	cout << "3 - Multiplicação\n";
	cout << "4 - Divisão\n\n";
	
	cin >> opcao;
	
	switch(opcao){
		case 1:
			cout << "A opção escolhida foi soma. \n\n";
			cout << "Digite o primeiro número: ";
			cin >> num1;
			cout << "Digite o segundo número: ";
			cin >> num2;
			
			calculo = num1 + num2;
			
			cout << num1 << " + " << num2 << " = " << calculo << "\n\n";
			break;
		case 2:
			cout << "A opção escolhida foi Subtração. \n\n";
			cout << "Digite o primeiro número: ";
			cin >> num1;
			cout << "Digite o segundo número: ";
			cin >> num2;
			
			calculo = num1 - num2;
			
			cout << num1 << " - " << num2 << " = " << calculo << "\n\n";
			break;
		case 3:
			cout << "A opção escolhida foi multiplicação. \n\n";
			cout << "Digite o primeiro número: ";
			cin >> num1;
			cout << "Digite o segundo número: ";
			cin >> num2;
			
			calculo = num1 * num2;
			
			cout << num1 << " * " << num2 << " = " << calculo << "\n\n";
			break;
		case 4:
			cout << "A opção escolhida foi divisão. \n\n";
			cout << "Digite o primeiro número: ";
			cin >> num1;
			cout << "Digite o segundo número: ";
			cin >> num2;
			
				if (num1 > num2){
					calculo = num1 / num2;			
					cout << num1 << " / " << num2 << " = " << calculo << "\n\n";
				}else{
					cout << "O primeiro número é menor que o segundo.\n\n";
				}			
			break;
		default:
			cout << "Opção invalida!!!\n\n";
			break;
	}
	
	
	system("pause");
	return 0;
}

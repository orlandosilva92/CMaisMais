#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Crir um algoritmo que solicite ao usu�rio a entrada de dois n�meros
	e a opera��o que ele deseja executar(soma, subtra��o, divis�o ou multiplica��o).
	Logo em seguida, o algoritmo deve ler os dois n�meros da opera��o e apresentar
	o resultado na tela.
	*/
	
	int opcao,num1,num2,calculo;
	
	cout << "1 - Soma\n";
	cout << "2 - Subtra�ao\n";
	cout << "3 - Multiplica��o\n";
	cout << "4 - Divis�o\n\n";
	
	cin >> opcao;
	
	switch(opcao){
		case 1:
			cout << "A op��o escolhida foi soma. \n\n";
			cout << "Digite o primeiro n�mero: ";
			cin >> num1;
			cout << "Digite o segundo n�mero: ";
			cin >> num2;
			
			calculo = num1 + num2;
			
			cout << num1 << " + " << num2 << " = " << calculo << "\n\n";
			break;
		case 2:
			cout << "A op��o escolhida foi Subtra��o. \n\n";
			cout << "Digite o primeiro n�mero: ";
			cin >> num1;
			cout << "Digite o segundo n�mero: ";
			cin >> num2;
			
			calculo = num1 - num2;
			
			cout << num1 << " - " << num2 << " = " << calculo << "\n\n";
			break;
		case 3:
			cout << "A op��o escolhida foi multiplica��o. \n\n";
			cout << "Digite o primeiro n�mero: ";
			cin >> num1;
			cout << "Digite o segundo n�mero: ";
			cin >> num2;
			
			calculo = num1 * num2;
			
			cout << num1 << " * " << num2 << " = " << calculo << "\n\n";
			break;
		case 4:
			cout << "A op��o escolhida foi divis�o. \n\n";
			cout << "Digite o primeiro n�mero: ";
			cin >> num1;
			cout << "Digite o segundo n�mero: ";
			cin >> num2;
			
				if (num1 > num2){
					calculo = num1 / num2;			
					cout << num1 << " / " << num2 << " = " << calculo << "\n\n";
				}else{
					cout << "O primeiro n�mero � menor que o segundo.\n\n";
				}			
			break;
		default:
			cout << "Op��o invalida!!!\n\n";
			break;
	}
	
	
	system("pause");
	return 0;
}

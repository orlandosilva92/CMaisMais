#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Escolher o número da andar que deseja comprar
	
	int andar;
	
	cout << "Digite o andar que deseja comprar:\n\n";
	cin >> andar;
	
	switch (andar){
		case 1:
		case 2:
		case 3:
			cout << "Andares do 1 a 3 - R$100.000,00.\n\n";
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			cout << "Andares do 4 a 8 - R$150.000,00.\n\n";
			break;
		case 9:
		case 10:
		case 11:
		case 12:
			cout << "Andares do 9 a 12 - R$170.000,00.\n\n";
			break;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			cout << "Andares do 13 a 18 - R$190.000,00.\n\n";
			break;
		default:
			cout << "Andar não encontra.\n\n";
			break;		
	}
	
	
	system("pause");
	return 0;
}

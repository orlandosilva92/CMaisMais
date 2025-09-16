#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int opcao;
	
	cout << "Escolha o númeor do pais que vai ganhar a copa do mundo:\n\n";
	cout << "1 - Espanha\n";
	cout << "2 - Alemanha\n";	
	cout << "3 - Franca\n";
	cout << "4 - Brasil\n";
	cout << "5 - Italia\n";
	cout << "6 - Holanda\n";
	
	cin >> opcao;
	
	switch (opcao){	
	
	case 1:
		cout << "O país que irá ganhar a proxima copa é: Espanha\n";
	break; 
	case 2:
		cout << "O país que irá ganhar a proxima copa é: Alemanha\n";
	break; 
	case 3:
		cout << "O país que irá ganhar a proxima copa é: Franca\n";
	break; 
	case 4:
		cout << "O país que irá ganhar a proxima copa é: Brasil\n";
	break; 
	case 5:
		cout << "O país que irá ganhar a proxima copa é: Italia\n";
	break; 
	case 6:
		cout << "O país que irá ganhar a proxima copa é: Holanda\n";
	break; 
	default:
		cout << "Valor incorreto!\n";
	break;
	}
		
	system("pause");
	return 0;
}

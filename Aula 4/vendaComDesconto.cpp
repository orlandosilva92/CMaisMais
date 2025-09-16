#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	A loja de Jos� oferece aos seus funcion�rios um desconto de 10% para cada item comprado por eles.
	A loja de Jos� para fidelizar seus clientes, oferece para os clientes VIPs 5% de desconto para cada produto que comprarem.
	*/
	
	int tipoCliente;
	double valorVenda;
	
	cout << "------------- Venda do Jos� --------------\n\n";
	cout << "Qual o perfil do cliente escolhido?\n\n";
	cout << "1 - Cliente comum.\n";
	cout << "2 - Cliente VIP.(5% de desconto)\n";
	cout << "3 - Funcion�rio.(10% de desconto)\n";
	
	cin >> tipoCliente;
	
	switch (tipoCliente){
		case 1:
			cout << "Qual o valor total da venda?\n\n";
			cin >> valorVenda;
			cout << "O total a ser pago � R$ " << valorVenda << ",00 \n\n";
			break;
		case 2:
			cout << "Qual o valor total da venda?\n\n";
			cin >> valorVenda;
			valorVenda = valorVenda - (valorVenda * 0.05);
			cout << "O total a ser pago � R$ " << valorVenda << ",00 \n\n";
			break;
		case 3:
			cout << "Qual o valor total da venda?\n\n";
			cin >> valorVenda;
			valorVenda = valorVenda - (valorVenda * 0.10);
			cout << "O total a ser pago � R$ " << valorVenda << ",00 \n\n";
			break;
		default:
			cout << "Op��o de cliente invalida!\n\n";
			break;
	}
	
	system("pause");
	return 0;
}

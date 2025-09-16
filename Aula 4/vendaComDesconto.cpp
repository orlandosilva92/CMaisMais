#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	A loja de José oferece aos seus funcionários um desconto de 10% para cada item comprado por eles.
	A loja de José para fidelizar seus clientes, oferece para os clientes VIPs 5% de desconto para cada produto que comprarem.
	*/
	
	int tipoCliente;
	double valorVenda;
	
	cout << "------------- Venda do José --------------\n\n";
	cout << "Qual o perfil do cliente escolhido?\n\n";
	cout << "1 - Cliente comum.\n";
	cout << "2 - Cliente VIP.(5% de desconto)\n";
	cout << "3 - Funcionário.(10% de desconto)\n";
	
	cin >> tipoCliente;
	
	switch (tipoCliente){
		case 1:
			cout << "Qual o valor total da venda?\n\n";
			cin >> valorVenda;
			cout << "O total a ser pago é R$ " << valorVenda << ",00 \n\n";
			break;
		case 2:
			cout << "Qual o valor total da venda?\n\n";
			cin >> valorVenda;
			valorVenda = valorVenda - (valorVenda * 0.05);
			cout << "O total a ser pago é R$ " << valorVenda << ",00 \n\n";
			break;
		case 3:
			cout << "Qual o valor total da venda?\n\n";
			cin >> valorVenda;
			valorVenda = valorVenda - (valorVenda * 0.10);
			cout << "O total a ser pago é R$ " << valorVenda << ",00 \n\n";
			break;
		default:
			cout << "Opção de cliente invalida!\n\n";
			break;
	}
	
	system("pause");
	return 0;
}

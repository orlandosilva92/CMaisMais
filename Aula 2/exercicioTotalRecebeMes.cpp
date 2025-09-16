#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	double horasTrabalhadasMes, valorHoraTrabalhada,totalReceberMes;
	
	cout << "Informe quanto vale a sua hora trabalhada:\n";
	cin >> valorHoraTrabalhada;

	cout << "Quantas horas voce trabalhou este mês?\n";
	cin >> horasTrabalhadasMes;
	
	totalReceberMes = valorHoraTrabalhada * horasTrabalhadasMes;
	
	cout << "Voce recebera este mês R$ " << totalReceberMes << ".\n";	
	
	system("pause");
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	double horasTrabalhadasMes, valorHoraTrabalhada,totalReceberMes,ir = 0.11,inss = 0.08,sindicato = 0.05;
	
	cout << "Informe quanto vale a sua hora trabalhada:\n";
	cin >> valorHoraTrabalhada;

	cout << "Quantas horas voce trabalhou este mês?\n";
	cin >> horasTrabalhadasMes;
	
	totalReceberMes = valorHoraTrabalhada * horasTrabalhadasMes;
	
	cout << "+Salário bruto: R$ " << totalReceberMes << ".\n";
	ir = totalReceberMes * ir;
	cout << "-IR (11%): R$ " << ir << ".\n";
	inss = totalReceberMes * inss;
	cout << "-INSS (8%): R$ " << inss << ".\n";	
	sindicato = totalReceberMes * sindicato;
	cout << "-Sindicato (5%): R$ " << sindicato << ".\n";
	totalReceberMes = totalReceberMes - (ir+inss+sindicato);	
	cout << "+Salário liquido: R$ " << totalReceberMes << ".\n";
	
	system("pause");
	return 0;
}

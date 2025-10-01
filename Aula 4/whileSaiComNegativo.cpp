#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	Criar um algoritmo que solicite entrada de n�meros inteiros e positivos no intervalo de 0 a 40 e s� saia se digitar um n�mero negativo.
	
	Ap�s isso, o algoritmo dever� imprimir a quantidade de n�meros que foram digitados no seguinte intervalo:
	
	[0-10],[11-20],[21-30],e[31-40].
	*/
	
	int numero = 0, intervalo1 = 0,intervalo2 = 0,intervalo3 = 0,intervalo4 = 0,intervaloForaIntervalo = 0;
	
	while(true){		
		cout << "Digite um n�mero entre 0 e 40.\nSe for sair digite n�mero negativo.\n";
		cin >> numero;
			if(numero < 0){				
				break;
			}
			if(numero <= 10){
				intervalo1++;
			}else if(numero <= 20){
				intervalo2++;
			}else if(numero <= 30){
				intervalo3++;
			}else if(numero <= 40){
				intervalo4++;
			}else{
				cout << "Valor invalido.\n";
				break;
			}
	}
	
	cout << "[0-10]: "<< intervalo1<< "\n[11-20]: "<< intervalo2<< "\n[21-30]: "<< intervalo3<< "\n[31-40]: "<< intervalo4<< ".\n";
	
	system("pause");
	return 0;
}

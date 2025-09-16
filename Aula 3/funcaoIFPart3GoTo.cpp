#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	string pais;
	
	//Para indicar que o recomecar é uma label(rotulo/marcador colocamos os dois pontos no final. O goto vai jogar para aqui o recomeço.
	recomecar:
	
	cout << "Digite o nome do pais que será campeão do mundo.\n";
	cin >> pais;
		
	if(pais == "Brasil" || pais == "brasil" || pais == "BRASIL"){//AND = && / OR = ||
		cout << "O Brasil será o próximo campeão do mundo.\n";
	}else{
		goto recomecar;//Esse goto faz oque que se crie uma laço de repetição no IF, ate que o valor seja encontrado o goto vai jogar para a label "recomecar"
	}
	
	system("pause");
	return 0;
}

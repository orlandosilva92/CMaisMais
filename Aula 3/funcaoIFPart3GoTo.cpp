#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	string pais;
	
	//Para indicar que o recomecar � uma label(rotulo/marcador colocamos os dois pontos no final. O goto vai jogar para aqui o recome�o.
	recomecar:
	
	cout << "Digite o nome do pais que ser� campe�o do mundo.\n";
	cin >> pais;
		
	if(pais == "Brasil" || pais == "brasil" || pais == "BRASIL"){//AND = && / OR = ||
		cout << "O Brasil ser� o pr�ximo campe�o do mundo.\n";
	}else{
		goto recomecar;//Esse goto faz oque que se crie uma la�o de repeti��o no IF, ate que o valor seja encontrado o goto vai jogar para a label "recomecar"
	}
	
	system("pause");
	return 0;
}

/*
iostream � uma biblioteca
I - vem de input - Entrada
O - vem de output - Sa�da
*/
#include <iostream>

//Para usarmos acentos
#include <locale.h>

/*
Importando todos os identificadores do NameSpace STD para usar o cout(escrever na tela) e endl(igual ao \n, server para pular linha)
O Namespace � nada mais nada menos que uma organiza��o de pastas
*/
using namespace std;

/*
Todo programa em c++ tem uma e comente uma fun��o principal que � a fun��o main
*/
int main(){
	
	setlocale(LC_ALL,"");
	cout << "Ol� mundo!" << endl;
	cout << "Hello word!\nSou o aluno Orlando" << endl;
	//A fun��o main diz que retorna um inteiro, ent�o colocamos o "0" como retorno
	return 0;
}


/*
iostream é uma biblioteca
I - vem de input - Entrada
O - vem de output - Saída
*/
#include <iostream>

//Para usarmos acentos
#include <locale.h>

/*
Importando todos os identificadores do NameSpace STD para usar o cout(escrever na tela) e endl(igual ao \n, server para pular linha)
O Namespace é nada mais nada menos que uma organização de pastas
*/
using namespace std;

/*
Todo programa em c++ tem uma e comente uma função principal que é a função main
*/
int main(){
	
	setlocale(LC_ALL,"");
	cout << "Olá mundo!" << endl;
	cout << "Hello word!\nSou o aluno Orlando" << endl;
	//A função main diz que retorna um inteiro, então colocamos o "0" como retorno
	return 0;
}


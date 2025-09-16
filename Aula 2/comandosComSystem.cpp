#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	system("notepad"); //Abri o bloco de notas
	
	system("mspaint");//Abri o paint
	
	system("ping www.google.com.br");//Faz ping para o google
	
	system("mkdir PastaSystem34");//Cria uma pasta
	
	system("mkdir Pasta System 34");//Cria mais de uma pasta
	
	//Todos os comando do CMD é possivel fazer aqui no c++
	
	
	system("pause");
	return 0;
}

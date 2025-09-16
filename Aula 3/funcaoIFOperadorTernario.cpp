#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	//Presta atenção nessa kcta, odeio operador ternário
	int idade;
	string mensagem;
	
	cout << "Digite sua idade?\n";
	cin >> idade;
	
	/*Operador ternario simples:
	   condiçao                        verdadeiro                           falso*/
	(idade >= 18) ? mensagem = "Você é maior de idade\n" : mensagem = "Você é menor de idade\n";
	
	cout << "---------------------------------------\n";
	cout << "Você tem " << idade << " anos.\n\n";
	cout << mensagem;
	
	//Outro exemplo:
	cout << "Digite sua idade?\n";
	cin >> idade;
	
	/*Operador ternario encadeada:
	   condiçao                         verdadeiro             falso, porém com novo encadeamento. verdadeiro                             falso*/
	(idade >= 18) ? mensagem = "Você é maior de idade\n" : (idade == 17) ? mensagem = "Proximo ano você terá 18 anos.\n" : mensagem = "menor de idade.\n";
	
	cout << "---------------------------------------\n";
	cout << "Você tem " << idade << " anos.\n\n";
	cout << mensagem;
	
	//Operador ternario com incremento e subtração
	string sexo;
	double preco = 10;
	
	cout << "Digite o seu sexo\n\n";
	cin >> sexo;
	
	(sexo == "masculino") ? preco++ : preco-=3;/*preco-=3 >> preco = preco - 3*/
	cout << "---------------------------------------\n";
	cout << "Seu sexo é o " << sexo << ".\n";
	cout << "Você pagara: R$ " << preco << ",00. \n"; 	
	
	
	system("pause");
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	//Presta aten��o nessa kcta, odeio operador tern�rio
	int idade;
	string mensagem;
	
	cout << "Digite sua idade?\n";
	cin >> idade;
	
	/*Operador ternario simples:
	   condi�ao                        verdadeiro                           falso*/
	(idade >= 18) ? mensagem = "Voc� � maior de idade\n" : mensagem = "Voc� � menor de idade\n";
	
	cout << "---------------------------------------\n";
	cout << "Voc� tem " << idade << " anos.\n\n";
	cout << mensagem;
	
	//Outro exemplo:
	cout << "Digite sua idade?\n";
	cin >> idade;
	
	/*Operador ternario encadeada:
	   condi�ao                         verdadeiro             falso, por�m com novo encadeamento. verdadeiro                             falso*/
	(idade >= 18) ? mensagem = "Voc� � maior de idade\n" : (idade == 17) ? mensagem = "Proximo ano voc� ter� 18 anos.\n" : mensagem = "menor de idade.\n";
	
	cout << "---------------------------------------\n";
	cout << "Voc� tem " << idade << " anos.\n\n";
	cout << mensagem;
	
	//Operador ternario com incremento e subtra��o
	string sexo;
	double preco = 10;
	
	cout << "Digite o seu sexo\n\n";
	cin >> sexo;
	
	(sexo == "masculino") ? preco++ : preco-=3;/*preco-=3 >> preco = preco - 3*/
	cout << "---------------------------------------\n";
	cout << "Seu sexo � o " << sexo << ".\n";
	cout << "Voc� pagara: R$ " << preco << ",00. \n"; 	
	
	
	system("pause");
	return 0;
}

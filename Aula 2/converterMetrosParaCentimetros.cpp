#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	double metro,convertCent;
	
	cout << "Digite a metragem: \n";
	cin >> metro;
	
	convertCent = metro * 100.0;
	
	cout << "Você tem " << convertCent << " cm.\n";	
	
	system("pause");
	return 0;
}

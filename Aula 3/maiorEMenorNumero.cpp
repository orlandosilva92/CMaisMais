#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL,"Portuguese");

    int num1, num2, num3;

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;
    cout << "Digite o terceiro n�mero: ";
    cin >> num3;

    int maior, menor;

    // Determinar o maior
    if (num1 > num2 && num1 > num3) {
        maior = num1;
    } else if (num2 > num1 && num2 > num3) {
        maior = num2;
    } else {
        maior = num3;
    }

    // Determinar o menor
    if (num1 < num2 && num1 < num3) {
        menor = num1;
    } else if (num2 < num1 && num2 < num3) {
        menor = num2;
    } else {
        menor = num3;
    }

    cout << "\nO maior n�mero digitado foi: " << maior << endl;
    cout << "O menor n�mero digitado foi: " << menor << endl;

    system("pause");
    return 0;
}


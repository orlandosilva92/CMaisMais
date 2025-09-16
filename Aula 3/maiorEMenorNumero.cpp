#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL,"Portuguese");

    int num1, num2, num3;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite o terceiro número: ";
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

    cout << "\nO maior número digitado foi: " << maior << endl;
    cout << "O menor número digitado foi: " << menor << endl;

    system("pause");
    return 0;
}


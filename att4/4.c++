#include <iostream>
using namespace std;

long long calcularFatorial(int valor) {
    if (valor == 0 || valor == 1) {
        return 1;
    }

    return valor * calcularFatorial(valor - 1);
}

int main() {
    int valor;

    cout << "Digite um numero inteiro nao negativo: ";
    cin >> valor;

    if (valor < 0) {
        cout << "Numero invalido!" << endl;
    } else {
        cout << valor << "! = " << calcularFatorial(valor) << endl;
    }

    return 0;
}
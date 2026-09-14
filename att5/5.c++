#include <iostream>
using namespace std;

long long fibonacciRecursivo(int posicao) {
    if (posicao <= 1) {
        return posicao;
    }

        return fibonacciRecursivo(posicao - 1) +
            fibonacciRecursivo(posicao - 2);
}

long long fibonacciIterativo(int posicao) {
    if (posicao <= 1) {
        return posicao;
    }

    long long anterior = 0;
    long long atual = 1;

    for (int indice = 2; indice <= posicao; indice++) {
        long long proximo = anterior + atual;

        anterior = atual;
        atual = proximo;
    }

    return atual;
}

int main() {
    int posicao;

    cout << "Digite a posicao de Fibonacci: ";
    cin >> posicao;

    if (posicao < 0) {
        cout << "Numero invalido!" << endl;
        return 0;
    }

    cout << "\nRecursivo: "
         << fibonacciRecursivo(posicao) << endl;

    cout << "Iterativo: "
         << fibonacciIterativo(posicao) << endl;

    return 0;
}
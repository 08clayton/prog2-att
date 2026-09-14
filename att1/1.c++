#include <iostream>
#include <vector>
using namespace std;

int obterMaior(const vector<int>& valores) {
    int maior = valores[0];

    for (int valor : valores) {
        if (valor > maior) {
            maior = valor;
        }
    }

    return maior;
}

int obterMenor(const vector<int>& valores) {
    int menor = valores[0];

    for (int valor : valores) {
        if (valor < menor) {
            menor = valor;
        }
    }

    return menor;
}

double calcularMedia(const vector<int>& valores) {
    int soma = 0;

    for (int valor : valores) {
        soma += valor;
    }

    return (double)soma / valores.size();
}

int contarPares(const vector<int>& valores) {
    int quantidade = 0;

    for (int valor : valores) {
        if (valor % 2 == 0) {
            quantidade++;
        }
    }

    return quantidade;
}

int contarImpares(const vector<int>& valores) {
    int quantidade = 0;

    for (int valor : valores) {
        if (valor % 2 != 0) {
            quantidade++;
        }
    }

    return quantidade;
}

int main() {
    int total;

    cout << "Informe quantos valores serao digitados: ";
    cin >> total;

    vector<int> valores(total);

    for (int indice = 0; indice < total; indice++) {
        cout << "Informe o " << indice + 1 << " valor: ";
        cin >> valores[indice];
    }

    cout << "\nMaior valor: " << obterMaior(valores) << endl;
    cout << "Menor valor: " << obterMenor(valores) << endl;
    cout << "Media: " << calcularMedia(valores) << endl;
    cout << "Quantidade de pares: " << contarPares(valores) << endl;
    cout << "Quantidade de impares: " << contarImpares(valores) << endl;

    return 0;
}
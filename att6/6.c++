#include <iostream>
#include <vector>
using namespace std;

int somarValores(const vector<int>& valores, int indice) {
    if (indice == valores.size()) {
        return 0;
    }

        return valores[indice] +
            somarValores(valores, indice + 1);
}

int main() {
    int total;

    cout << "Informe a quantidade de numeros: ";
    cin >> total;

    vector<int> valores(total);

    for (int indice = 0; indice < total; indice++) {
        cout << "Informe o numero " << indice + 1 << ": ";
        cin >> valores[indice];
    }

    int resultado = somarValores(valores, 0);

    cout << "\nSoma = " << resultado << endl;

    return 0;
}
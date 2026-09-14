#include <iostream>
#include <cmath>
using namespace std;

double adicionar(double primeiro, double segundo) {
    return primeiro + segundo;
}

double subtrair(double primeiro, double segundo) {
    return primeiro - segundo;
}

double multiplicar(double primeiro, double segundo) {
    return primeiro * segundo;
}

double dividir(double primeiro, double segundo) {
    return primeiro / segundo;
}

double elevar(double base, double expoente) {
    return pow(base, expoente);
}

int obterResto(int primeiro, int segundo) {
    return primeiro % segundo;
}

int main() {
    int opcao;

    do {
        cout << "\n===== CALCULADORA =====\n";
        cout << "1 - Soma\n";
        cout << "2 - Subtracao\n";
        cout << "3 - Multiplicacao\n";
        cout << "4 - Divisao\n";
        cout << "5 - Potencia\n";
        cout << "6 - Resto da divisao\n";
        cout << "0 - Sair\n";
        cout << "Opcao escolhida: ";
        cin >> opcao;

        if (opcao >= 1 && opcao <= 5) {
            double a, b;

            cout << "Digite o primeiro numero: ";
            cin >> a;

            cout << "Digite o segundo numero: ";
            cin >> b;

            switch (opcao) {
                case 1:
                        cout << "Resultado: " << adicionar(a, b) << endl;
                    break;

                case 2:
                        cout << "Resultado: " << subtrair(a, b) << endl;
                    break;

                case 3:
                        cout << "Resultado: " << multiplicar(a, b) << endl;
                    break;

                case 4:
                    if (b == 0) {
                        cout << "Erro: nao e possivel dividir por zero!\n";
                    } else {
                        cout << "Resultado: " << dividir(a, b) << endl;
                    }
                    break;

                case 5:
                    cout << "Resultado: " << elevar(a, b) << endl;
                    break;
            }

        } else if (opcao == 6) {
            int a, b;

            cout << "Digite o primeiro numero inteiro: ";
            cin >> a;

            cout << "Digite o segundo numero inteiro: ";
            cin >> b;

            if (b == 0) {
                cout << "Erro: nao e possivel calcular resto por zero!\n";
            } else {
                cout << "Resultado: " << obterResto(a, b) << endl;
            }

        } else if (opcao != 0) {
            cout << "Opcao invalida!\n";
        }

    } while (opcao != 0);

    cout << "Calculadora encerrada.\n";

    return 0;
}
#include <iostream>
#include <stack>
#include <string>
using namespace std;

void acessarPagina(stack<string>& historico) {
    string pagina;

    cout << "Informe a URL da pagina: ";
    cin >> pagina;

    historico.push(pagina);

    cout << "Pagina visitada!\n";
}

void mostrarPaginaAtual(const stack<string>& historico) {
    if (historico.empty()) {
        cout << "Nenhuma pagina visitada.\n";
        return;
    }

    cout << "Pagina atual: "
         << historico.top() << endl;
}

void retornarPagina(stack<string>& historico) {
    if (historico.size() <= 1) {
        cout << "Nao ha pagina anterior.\n";
        return;
    }

    historico.pop();

    cout << "Voltando para: "
         << historico.top() << endl;
}

void mostrarHistorico(stack<string> historico) {
    if (historico.empty()) {
        cout << "Historico vazio.\n";
        return;
    }

    cout << "\n===== HISTORICO =====\n";

    while (!historico.empty()) {
        cout << historico.top() << endl;
        historico.pop();
    }
}

int main() {
    stack<string> historico;
    int opcao;

    do {
        cout << "\n===== HISTORICO =====\n";
        cout << "1 - Visitar pagina\n";
        cout << "2 - Ver pagina atual\n";
        cout << "3 - Voltar\n";
        cout << "4 - Exibir historico\n";
        cout << "0 - Sair\n";
        cout << "Selecione uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                acessarPagina(historico);
                break;

            case 2:
                mostrarPaginaAtual(historico);
                break;

            case 3:
                retornarPagina(historico);
                break;

            case 4:
                mostrarHistorico(historico);
                break;

            case 0:
                cout << "Encerrando...\n";
                break;

            default:
                cout << "Opcao invalida!\n";
        }

    } while (opcao != 0);

    return 0;
}
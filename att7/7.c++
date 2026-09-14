#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Tarefa {
    string descricao;
    bool concluida;
};

void incluirTarefa(vector<Tarefa>& tarefas) {
    Tarefa tarefa;

    cout << "Informe a tarefa: ";
    getline(cin >> ws, tarefa.descricao);

    tarefa.concluida = false;

    tarefas.push_back(tarefa);

    cout << "Tarefa adicionada!\n";
}

void mostrarTarefas(const vector<Tarefa>& tarefas) {
    if (tarefas.empty()) {
        cout << "Nenhuma tarefa cadastrada.\n";
        return;
    }

    cout << "\n===== LISTA DE TAREFAS =====\n";

    for (int i = 0; i < tarefas.size(); i++) {
        cout << i + 1 << " - "
             << tarefas[i].descricao;

        if (tarefas[i].concluida) {
            cout << " [CONCLUIDA]";
        } else {
            cout << " [PENDENTE]";
        }

        cout << endl;
    }
}

void procurarTarefa(const vector<Tarefa>& tarefas) {
    string busca;

    cout << "Informe o nome da tarefa: ";
    getline(cin >> ws, busca);

    for (const Tarefa& tarefa : tarefas) {
        if (tarefa.descricao.find(busca) != string::npos) {
            cout << "Tarefa encontrada: "
                 << tarefa.descricao << endl;
            return;
        }
    }

    cout << "Tarefa nao encontrada.\n";
}

void editarTarefa(vector<Tarefa>& tarefas) {
    int posicao;

    mostrarTarefas(tarefas);

    cout << "Informe o numero da tarefa para alterar: ";
    cin >> posicao;

    if (posicao < 1 || posicao > tarefas.size()) {
        cout << "Tarefa invalida!\n";
        return;
    }

    cout << "Informe a nova descricao: ";
    getline(cin >> ws, tarefas[posicao - 1].descricao);

    cout << "Tarefa alterada!\n";
}

void excluirTarefa(vector<Tarefa>& tarefas) {
    int posicao;

    mostrarTarefas(tarefas);

    cout << "Informe o numero da tarefa para remover: ";
    cin >> posicao;

    if (posicao < 1 || posicao > tarefas.size()) {
        cout << "Tarefa invalida!\n";
        return;
    }

    tarefas.erase(tarefas.begin() + posicao - 1);

    cout << "Tarefa removida!\n";
}

void finalizarTarefa(vector<Tarefa>& tarefas) {
    int posicao;

    mostrarTarefas(tarefas);

    cout << "Informe o numero da tarefa concluida: ";
    cin >> posicao;

    if (posicao < 1 || posicao > tarefas.size()) {
        cout << "Tarefa invalida!\n";
        return;
    }

    tarefas[posicao - 1].concluida = true;

    cout << "Tarefa marcada como concluida!\n";
}

int main() {
    vector<Tarefa> tarefas;
    int opcao;

    do {
        cout << "\n===== GERENCIADOR DE TAREFAS =====\n";
        cout << "1 - Adicionar tarefa\n";
        cout << "2 - Listar tarefas\n";
        cout << "3 - Buscar tarefa\n";
        cout << "4 - Alterar tarefa\n";
        cout << "5 - Remover tarefa\n";
        cout << "6 - Quantidade de tarefas\n";
        cout << "7 - Marcar como concluida\n";
        cout << "0 - Sair\n";
        cout << "Selecione uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                incluirTarefa(tarefas);
                break;

            case 2:
                mostrarTarefas(tarefas);
                break;

            case 3:
                procurarTarefa(tarefas);
                break;

            case 4:
                editarTarefa(tarefas);
                break;

            case 5:
                excluirTarefa(tarefas);
                break;

            case 6:
                cout << "Quantidade de tarefas: "
                     << tarefas.size() << endl;
                break;

            case 7:
                finalizarTarefa(tarefas);
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
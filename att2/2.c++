#include <iostream>
#include <string>
using namespace std;

bool nomeAceito(string nome) {
    return !nome.empty();
}

bool idadeAceita(int idade) {
    return idade >= 14 && idade <= 120;
}

bool emailAceito(string email) {
    return email.find('@') != string::npos &&
           email.find('.') != string::npos;
}

bool senhaAceita(string senha) {
    return senha.length() >= 8;
}

int main() {
    string nome;
    int idade;
    string email;
    string senha;

    do {
        cout << "Informe seu nome: ";
        getline(cin >> ws, nome);

        if (!nomeAceito(nome)) {
            cout << "Nome invalido!\n";
        }

    } while (!nomeAceito(nome));

    do {
        cout << "Informe sua idade: ";
        cin >> idade;

        if (!idadeAceita(idade)) {
            cout << "Idade invalida! Deve estar entre 14 e 120.\n";
        }

    } while (!idadeAceita(idade));

    do {
        cout << "Informe seu e-mail: ";
        cin >> email;

        if (!emailAceito(email)) {
            cout << "E-mail invalido!\n";
        }

    } while (!emailAceito(email));

    do {
        cout << "Informe sua senha: ";
        cin >> senha;

        if (!senhaAceita(senha)) {
            cout << "A senha deve ter pelo menos 8 caracteres!\n";
        }

    } while (!senhaAceita(senha));

    cout << "\nCadastro realizado com sucesso!" << endl;

    return 0;
}
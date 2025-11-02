#include <iostream>
#include <string>
using namespace std;

//! Criptografia trocando todas as diagonais

int main() {
    string frase;
    int tamanho = 0;
    int n = 1;
    char matriz[50][50];
    int pos = 0;

    cout << "Digite a frase (use * no lugar do espaco): ";
    cin >> frase;

    //! contar tamanho
    while (frase[tamanho] != '\0') {
        tamanho++;
    }

    //! calcular tamanho da matriz
    while (n * n < tamanho) {
        n++;
    }

    //! retirar acentos
    for (int i = 0; i < tamanho; i++) {
        // Maiúsculas
        if (frase[i] == 'Á' || frase[i] == 'À' || frase[i] == 'Ã' || frase[i] == 'Â')
            frase[i] = 'A';
        else if (frase[i] == 'É' || frase[i] == 'Ê')
            frase[i] = 'E';
        else if (frase[i] == 'Í')
            frase[i] = 'I';
        else if (frase[i] == 'Ó' || frase[i] == 'Õ' || frase[i] == 'Ô')
            frase[i] = 'O';
        else if (frase[i] == 'Ú')
            frase[i] = 'U';
        else if (frase[i] == 'Ç')
            frase[i] = 'C';
        // Minúsculas
        else if (frase[i] == 'á' || frase[i] == 'à' || frase[i] == 'ã' || frase[i] == 'â')
            frase[i] = 'a';
        else if (frase[i] == 'é' || frase[i] == 'ê')
            frase[i] = 'e';
        else if (frase[i] == 'í')
            frase[i] = 'i';
        else if (frase[i] == 'ó' || frase[i] == 'õ' || frase[i] == 'ô')
            frase[i] = 'o';
        else if (frase[i] == 'ú')
            frase[i] = 'u';
        else if (frase[i] == 'ç')
            frase[i] = 'c';
    }

    //! completar com "*"
    while (tamanho < n * n) {
        frase += '*';
        tamanho++;
    }

    //! preencher a matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = frase[pos];
            pos++;
        }
    }

    //! trocar todas as diagonais
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            char temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }

    //! mostrar a matriz criptografada
    cout << "Matriz criptografada (todas as diagonais trocadas):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
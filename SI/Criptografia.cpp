#include <iostream>
#include <string>
using namespace std;

//! Criptografia Linha e Coluna

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
        //! Maiúsculas
        if (frase[i] == 'Á' or frase[i] == 'À' or frase[i] == 'Ã' or frase[i] == 'Â'){
            frase[i] = 'A';
        }
        else if (frase[i] == 'É' or frase[i] == 'Ê'){
            frase[i] = 'E';
        }
        else if (frase[i] == 'Í'){
            frase[i] = 'I';
        }
        else if (frase[i] == 'Ó' or frase[i] == 'Õ' or frase[i] == 'Ô'){
            frase[i] = 'O';
        }
        else if (frase[i] == 'Ú'){
            frase[i] = 'U';
        }
        else if (frase[i] == 'Ç'){
            frase[i] = 'C';
        }

        //! Minúsculas
        else if (frase[i] == 'á' or frase[i] == 'à' or frase[i] == 'ã' or frase[i] == 'â'){
            frase[i] = 'a';
        }
        else if (frase[i] == 'é' or frase[i] == 'ê'){
            frase[i] = 'e';
        }
        else if (frase[i] == 'í'){
            frase[i] = 'i';
        }
        else if (frase[i] == 'ó' or frase[i] == 'õ' or frase[i] == 'ô'){
            frase[i] = 'o';
        }
        else if (frase[i] == 'ú'){
            frase[i] = 'u';
        }
        else if (frase[i] == 'ç'){
            frase[i] = 'c';
        }
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

    //! trocar linhas
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            char temp = matriz[i][j];
            matriz[i][j] = matriz[n - 1 - i][j];
            matriz[n - 1 - i][j] = temp;
        }
    }

    //! trocar colunas
    for (int j = 0; j < n / 2; j++) {
        for (int i = 0; i < n; i++) {
            char temp = matriz[i][j];
            matriz[i][j] = matriz[i][n - 1 - j];
            matriz[i][n - 1 - j] = temp;
        }
    }

    //! mostrar a matriz criptografada
    cout << "Matriz criptografada:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
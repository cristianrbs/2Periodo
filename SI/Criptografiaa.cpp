#include <iostream>
#include <string>
using namespace std;

//! Criptografia na diagonal diagonal

int main() {
    string frase;
    int tamanho = 0;
    int n = 1;
    char matriz[50][50];
    int pos = 0;
    int r1, c1;
    int r2, c2;
    char temp;


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

    //! preencher a matriz )
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = frase[pos];
            pos++;
        }
    }

    //! trocar na diagonal principal
    for (int d = 1; d <= n - 1; d++) {
        for (int i = 0; i <= n - 1 - d; i++) {
            r1 = i; 
            c1 = i + d;
            r2 = i + d;
            c2 = i;
            temp = matriz[r1][c1];
            matriz[r1][c1] = matriz[r2][c2];
            matriz[r2][c2] = temp;
        }
    }

    //! trocar na diagonal secundária
    for (int d = 1; d <= n - 1; d++) {
        for (int i = 0; i <= n - 1 - d; i++) {
            r1 = i;
            c1 = (n - 1) - (i + d);
            r2 = i + d;
            c2 = (n - 1) - i;
            temp = matriz[r1][c1];
            matriz[r1][c1] = matriz[r2][c2];
            matriz[r2][c2] = temp;
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

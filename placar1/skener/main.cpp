#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i, j, k, l, r, c, zr, zc, new_lines, new_columns, num_lines, num_columns;
    vector<vector<char>> matriz;

    cin >> r >> c >> zr >> zc;
    new_lines = r*zr;
    new_columns = c*zc;
    matriz.resize(r); // construir a matriz a partir dos valores
    for(i = 0; i < r; i++)
        matriz[i].resize(c);
    for(i = 0; i < r; i++) { // colocar os valores na matriz
        for(j = 0; j < c; j++) {
            cin >> matriz[i][j];
        }
    }
    /*for(i = 0; i < r; i++) { // essa parte eh soh para imprimir
        for(j = 0; j < c; j++) {
            cout << matriz[i][j];
        }
        cout << "\n";
    }*/
    num_lines = new_lines / r; // numero de vezes para repetir a impressao nas linhas consecutivas
    num_columns = new_columns / c; //numero de vezes apra repetir a impressao nas colunas consecutivas
    for(i = 0; i < r; i++) {
        for(l = 0; l < num_lines; l++) {
            for(j = 0; j < c; j++) {
                for(k = 0; k < num_columns; k++) {
                    cout << matriz[i][j];
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
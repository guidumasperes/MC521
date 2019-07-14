#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int knapsack(int k, int d, vector<int> valf, vector<int> sizef, vector<vector<int>> matrix) {
    int i, j;

    for(i = 0; i < k; i++) { //abordagem top-down
        for(j = 0; j < d; j++) {
            if(i == 0) { //se o tamanho do problema for 0 ou o valor for 0 entao a solucao otima eh 0
                matrix[i][j] = 0;
            } else if(j == 0) {
                matrix[i][j] = 0;
            } else { //para cada item, avaliamos ele quando o tamanho da mochila for j
                if(sizef[i-1] > j) { //o tamanho do item eh maior que o tamanho da mochila naquele instante nem colcamos
                    matrix[i][j] = matrix[i-1][j];
                } else { //c.c. vamos escolher a solucao ou com o item ou sem ele
                    matrix[i][j] = max(matrix[i-1][j], matrix[i-1][j-sizef[i-1]]+valf[i-1]);
                }
            }
        }
    }
    return matrix[k-1][d-1]; //no final retorna o valor otimo
}

int main() {
    vector<int> val;
    vector<int> size;
    vector<vector<int>> matrix;
    int s, n, i, j, a, b;

    cin >> s;
    cin >> n;
    val.resize(n);
    size.resize(n);
    //temos que alocar um tamanho a mais na matriz
    matrix.resize(n+1);
    for(i = 0; i < n+1; i++)
        matrix[i].resize(s+1);
    for(i = 0; i < n; i++) {
        cin >> a;
        size[i] = a;
        cin >> b;
        val[i] = b;
    }
    cout << knapsack(n+1, s+1, val, size, matrix) << endl;
    return 0;
}
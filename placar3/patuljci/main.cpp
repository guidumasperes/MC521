#include <iostream>

using namespace std;

int main() {
    int i, j, v[9], sum = 0, exced;

    for(i = 0; i < 9; i++) {                // recebe as entradas
        cin >> v[i];
        sum += v[i];
    }
    exced = sum - 100;
    for(i = 8; i >= 0; i--) {              // faz todas as combinacoes para ver se a soma de dois elementos do conjunto
        for(j = i-1; j >= 0; j--) {        // e igual ao excedente
            if(exced == v[i] + v[j]) {     // como a soluçao e unica ao encontrar a primeira já para
                v[i] = 0;
                v[j] = 0;
                goto sai;
            }
        }
    }
    sai:
    for(i = 0; i < 9; i++) {
        if(v[i] != 0) {
            cout << v[i] << endl;
        }
    }
    return 0;
}
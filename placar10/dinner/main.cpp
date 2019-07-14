#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int i, n, k, most_freq, roubados, uten = 1, total_sup, cnt_freq = 0, cnt_atual = 0, tam = 0, cnt_dish = 0;

    cin >> n;
    cin >> k;
    v.resize(n);
    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        tam += 1;
    }
    most_freq = v[0];
    sort(v.begin(), v.end());
    for(i = 1; i < n; i++) {
        if(v[i] == v[i-1]) {
            cnt_atual += 1;
        } else {
            cnt_atual+=1;
            if(cnt_atual > cnt_freq) {
                most_freq = v[i - 1];
                cnt_freq = cnt_atual;
            }
            cnt_atual = 0;
            uten += 1;
        }
    }
    if(cnt_atual) {
        cnt_atual+=1;
        if(cnt_atual > cnt_freq) {
            most_freq = v[i - 1];
            cnt_freq = cnt_atual;
        }
        cnt_atual = 0;
    }
    for(i = 0; i < n; i++) {
        if(v[i] == most_freq) {
            cnt_atual += 1;
            if(cnt_atual == k) {
                cnt_dish += 1;
                cnt_atual = 0;
            }
        }
    }
    if(cnt_atual)
        cnt_dish++;
    total_sup = k * uten;
    roubados = (total_sup*cnt_dish) - tam;
    cout << roubados << endl;
    return 0;
}

//1)pega o numero que mais se repete -- > OK!
//2)faz um for com um contador para saber quantos pratos foram servidos -- > OK!
//3)sabendo disso pega o numero de utensilios de um conjunto e multiplica pelo numero de convidados -- > OK!
//4)com esse numero multiplica pelo numero de pratos -- > OK!
//5)por fim, subtrai o numero de utensilios pelo numero que deveriamos ter no final -- > OK!
//5)o resultado dessa subtracao eh o numero de utensilios roubados -- > OK!
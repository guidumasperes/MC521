#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string aux1, aux2;
    vector<string> nomes;
    int i, j, k, n;
    bool inc = 0, decr = 0;

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> aux1;
        nomes.push_back(aux1);
    }
    for(j = 0; j < n-1; j++) {
        aux1 = nomes[j];
        aux2 = nomes[j+1];
        if(aux1[0] < aux2[0]) {
            if(decr) {
                cout << "NEITHER" << endl;
                return 0;
            }
            inc = 1;
        } else if(aux1[0] > aux2[0]) {
            if(inc) {
                cout << "NEITHER" << endl;
                return 0;
            }
            decr = 1;
        } else {
            k = 0;
            while(aux1[k] == aux2[k] && k < aux1.size() && k < aux2.size()) {
                k++;
            }
            if(aux1[k] < aux2[k]) {
                if(decr) {
                    cout << "NEITHER" << endl;
                    return 0;
                }
                inc = 1;
            } else if(aux1[k] > aux2[k]) {
                if (inc) {
                    cout << "NEITHER" << endl;
                    return 0;
                }
                decr = 1;
            }
        }
    }
    if(inc)
        cout << "INCREASING" << endl;
    else
        cout << "DECREASING" << endl;
    return 0;
}
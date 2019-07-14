#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int i, actual = 0, bigger = 0, zero = 0;
    int tam;

    cin >> tam;
    v.resize(tam);
    for(i = 0; i < tam; i++) {
        scanf("%d", &v[i]);
        if(v[i] == 0)
            zero = i;
    }
    if(zero == tam-1)
        zero = tam-2;
    if(tam > 1) {
        i = zero + 1;
        while (i != zero) {
            if (v[i] == 1) {
                actual += 1;
            } else {
                if (actual > bigger)
                    bigger = actual;
                actual = 0;
            }
            if (i == tam - 1) {
                i = -1;
            }
            i += 1;
        }
        if(v[i] == 1) {
            actual += 1;
        } else {
            if (actual > bigger)
                bigger = actual;
            actual = 0;
        }
    } else {
        if(v[0] == 1) {
            cout << "1" << endl;
            return 0;
        }
        else {
            cout << "0" << endl;
            return 0;
        }
    }
    if(actual > bigger)
        cout << actual << endl;
    else
        cout << bigger << endl;
    return 0;
}
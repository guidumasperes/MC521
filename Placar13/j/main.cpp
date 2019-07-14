#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int i, j, k, l, n = 0, cnt = 0;

    cin >> n;
    v.resize(n);
    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for(i = 0; i < n; i++) {
        for(j  = 0; j < n; j++) {
            if(j != i) {
                for(k = 0; k < n; k++) {
                    if(k != i && k != j) {
                        for(l = 0; l < n; l++) {
                            if(l != i && l != j && l != k) {
                                if (v[k] + v[l] == v[j]) {
                                    cnt += 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
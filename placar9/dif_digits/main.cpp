#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int a, b, i, j, k, l, cnt = 0, flag, test, rest_test;

    cin >> a;
    cin >> b;
    v.resize(4);
    for(i = a; i <= b; i++) {
        test = i;
        j = 0;
        while(test != 0) {
            rest_test = test % 10;
            test = test / 10;
            v[j] = rest_test;
            j++;
        }
        flag = 0;
        for(k = 0; k < j - 1; k++) {
            for(l = k + 1; l < j; l++) {
                if(v[k] == v[l]) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                break;
        }
        if(flag == 0)
            cnt++;
    }
    cout << cnt;
    return 0;
}
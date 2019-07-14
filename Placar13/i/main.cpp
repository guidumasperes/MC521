#include <iostream>

using namespace std;

int main() {
    long long int a, b, k, n, pos;

    cin >> n;
    for(int i = 0; i < n; i++) {
        scanf("%lld %lld %lld", &a, &b, &k);
        pos = 0;
        if(k % 2 != 0) {
            pos = pos + (((k/2)*a) + a);
            pos = pos - (k/2)*b;
        } else {
            pos = pos + a*(k/2);
            pos = pos - b*(k/2);
        }
        cout << pos << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int euclidian_gcd(int a, int b) {
    if(a == 0)
        return b;
    else
        return euclidian_gcd(b%a, a);
}

int main() {
    int i, n, a, b, c, num;

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> a >> b >> c;
        num = euclidian_gcd(a,b);
        if(c % num == 0) {
            cout << "Case " << i + 1 << ": " << "Yes" << endl;
        } else {
            cout << "Case " << i + 1 << ": " << "No" << endl;
        }
    }
    return 0;
}
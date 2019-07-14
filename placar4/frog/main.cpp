#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int i, n, x, gcd;
    vector<int> v;

    cin >> n;
    cin >> x;
    v.resize(n);
    for(i = 0; i < n; i++) {
        cin >> v[i];
    }
    gcd = v[0];
    for(i = 1; i < n; i++) {
        gcd = __gcd(gcd, v[i]);
    }
    if(x < 0)
        x = x*(-1);
    if(x % gcd == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
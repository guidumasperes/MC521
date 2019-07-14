#include <iostream>

using namespace std;

int main() {
    int q, i, cnt;
    long long int n;

    cin >> q;
    for(i = 0; i < q; i++) {
        cin >> n;
        cnt = 0;
        while(n != 1) {
            if(n % 2 == 0) {
                n = n / 2;
            } else if(n % 3 == 0) {
                n = ((2*n)/3);
            } else if(n % 5 == 0) {
                n = ((4*n)/5);
            } else {
                break;
            }
            cnt++;
        }
        if(n == 1)
            cout << cnt << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
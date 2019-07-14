#include <iostream>
#include <math.h>
#include <limits>

using namespace std;

int main() {
    int t, i, j, n, cnt;

    cin >> t;
    for(i = 0; i < t; i++) {
        cin >> n;
        cnt = 0;
        for(j = 5; n / j >= 1; j*=5){
            cnt += floor(n / j);
        }
        cout << cnt << endl;
    }
    return 0;
}
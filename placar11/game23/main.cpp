#include <iostream>

using namespace std;

int main() {
    long long int n, m, num;
    int cnt = 0;

    cin >> n;
    cin >> m;
    if(m % n != 0) {
        cout << "-1" << endl;
        return 0;
    }
    num = m / n;
    while (num % 2 == 0) {
        num /= 2;
        cnt += 1;
    }
    while (num % 3 == 0) {
        num /= 3;
        cnt += 1;
    }
    if (num == 1) {
        cout << cnt << endl;
        return 0;
    } else {
        cout << "-1" << endl;
        return 0;
    }
}
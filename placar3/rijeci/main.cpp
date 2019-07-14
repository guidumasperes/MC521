#include <iostream>

using namespace std;

int fib(int num) {
    int x = 0, y = 1, z = 0, i;

    for(i = 0; i < num; i++) {
        z = x + y;
        x = y;
        y = z;
    }
    return x;
}

int main() {
    int n;

    cin >> n;
    if(n == 1) {
        cout << "0 " << "1" << endl;
    } else {
        cout << fib(n-1) << " " << fib(n) << endl;
    }
    return 0;
}
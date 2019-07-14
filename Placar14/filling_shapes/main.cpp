#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, num;

    cin >> n;
    if(n % 2 != 0) {
        cout << "0" << endl;
    } else {
        num = pow(2, (n / 2));
        cout << num << endl;
    }
    return 0;
}
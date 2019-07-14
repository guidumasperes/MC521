#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, i, j, flag = 1;
    long long int num;

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> num;
        for(j = 2; j < sqrt(num); j++) {
            if(num % j == 0) {
                cout << num << " is not a prime" << endl;
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << num << " is a prime" << endl;
        flag = 1;
    }
    return 0;
}
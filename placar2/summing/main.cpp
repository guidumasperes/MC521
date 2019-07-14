#include <iostream>

using namespace std;

int main() {
    int num, resto, acum;

    do {
        cin >> num;
        while (num / 10 != 0) {
            acum = 0;
            while (num != 0) {
                resto = num % 10;
                acum = acum + resto;
                num = num / 10;
            }
            num = acum;
        }
        if(num != 0)
            cout << num << endl;
    }while(num != 0);
    return 0;
}
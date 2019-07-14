#include <iostream>

using namespace std;

int main() {
    int x, y, z, ux, uy;

    cin >> x >> y >> z;
    ux = x + z;
    uy = y + z;
    if(ux >= y && uy >= x && z != 0) {
        cout << "?" << endl;
    } else {
        if(x > y) {
            cout << "+" << endl;
        } else if(x < y) {
            cout << "-" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}
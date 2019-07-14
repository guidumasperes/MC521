#include <iostream>

using namespace std;

int main() {
    int num, quads;

    cin >> num;
    while(num != 0){
        quads = (num*(num+1)*((2*num)+1))/6;
        cout << quads << endl;
        cin >> num;
    }
    return 0;
}
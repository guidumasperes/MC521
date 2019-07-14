#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    int a, b, i, j, k, tam, cnt;

    cin >> a;
    cin >> b;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    while(a != 0 && b != 0) {
        getline (cin, num);
        tam = num.length() - 1;
        //j sei o que tem que fazer agora o problema eh fazer
        }
        for(i = 0; i < num.length(); i++) {
            if(num[i] != 58)
                cout << num[i];
        }
        cout << endl;
        cin >> a;
        cin >> b;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    return 0;
}
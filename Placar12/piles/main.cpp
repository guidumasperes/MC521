#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    int tam, i, cnt = 0;
    string str;

    cin >> tam;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin, str);
    if(tam == 1) {
        if(str[0] == '+')
            cnt += 1;
    } else {
        for(i = 0; i < tam; i++) {
            if(str[i] == '+') {
                cnt += 1;
            } else {
                if(cnt > 0)
                    cnt -= 1;
            }
        }
    }
    cout << cnt;
    return 0;
}
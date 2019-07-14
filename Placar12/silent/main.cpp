#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> str;
    vector<string> strcl1;
    vector<string> strcl2;
    string straux;
    int tam, i, j, n, cnt1 = 0, cnt2 = 0, chatty = 0;

    cin >> tam;
    str.resize(tam);
    strcl1.resize(tam);
    strcl2.resize(tam);
    for(i = 0; i < tam; i++) {
        cin >> straux;
        str[i].append(straux);
    }
    sort(str.begin(), str.end());
    for(i = 0; i < tam-1; i+=2) {
        strcl1[i].append(str[i]);
        strcl2[i].append(str[i+1]);
        cnt1 += 1;
        cnt2 = cnt1;
    }
    if(tam % 2 != 0) {
        cout << "entrou" << endl;
        strcl1[i].append(str[i]);
        cnt1 += 1;
    }
    for(i = 0; i < tam; i++
        cout << strcl1[i];
     cout << cnt1 << endl;
    for(i = 0; i < cnt1; i++) {
        for(j = i+1; j < cnt1; j++) {
            cout << strcl1[0] << endl;
            cout << strcl1[1] << endl;
            if(strcl1[i][0] == strcl1[j][0])
                chatty += 1;
        }
    }
    for(i = 0; i < cnt2; i++) {
        for(j = i+1; j < cnt2; j++) {
            if(strcl2[i][0] == strcl2[j][0])
                chatty += 1;
        }
    }
    for(i = 0; i < tam; i++)
        cout << strcl1[i];
    cout << "bla" << endl;
    for(i = 0; i < tam; i++)
        cout << strcl2[i];
    cout << chatty << endl;
    return 0;
}
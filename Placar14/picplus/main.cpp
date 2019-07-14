#include <iostream>

using namespace std;

int main() {
    int i, j, k, l, lin, col;
    char aux, m[500][500];

    cin >> lin >> col;
    for(i = 0; i < lin; i++) {
        scanf("%s", &m[i][0]);
    }
    for(i = 1; i < lin-1; i++) {
        for(j = 1; j < col-1; j++) {
            if(m[i][j] == '*' && m[i-1][j] == '*' && m[i+1][j] == '*' && m[i][j+1] == '*' && m[i][j-1] == '*') {
                k = i;
                l = j;
                l++;
                while(l != col && m[k][l] == '*') {
                    m[k][l] = 'x';
                    l++;
                }
                l = j;
                l--;
                while(l != -1 && m[k][l] == '*') {
                    m[k][l] = 'x';
                    l--;
                }
                l = j;
                k++;
                while(k != lin && m[k][l] == '*') {
                    m[k][l] = 'x';
                    k++;
                }
                k = i;
                k--;
                while(k != -1 && m[k][l] == '*') {
                    m[k][l] = 'x';
                    k--;
                }
                m[i][j] = 'x';
                for(i = 0; i < lin; i++) {
                    for(j = 0; j < col; j++) {
                        if(m[i][j] == '*') {
                            cout << "NO" << endl;
                            return 0;
                        }
                    }
                }
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
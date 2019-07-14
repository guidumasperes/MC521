#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, cnt = 0;
    vector<int> v;

    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for(int i = 1; i < n-1; i++) {
        if(v[i-1] == 1 && v[i] == 0 && v[i+1] == 1) {
            cnt++;
            i  = i + 2;
        }
    }
    cout << cnt;
    return 0;
}
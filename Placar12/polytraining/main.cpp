#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int i, n, day, cnt = 0;

    cin >> n;
    v.resize(n);
    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end());
    day = 1;
    for(i = 0; i < n; i++) {
        if(day <= v[i]) {
            cnt++;
            day++;
        }
    }
    cout << cnt << endl;
    return 0;
}
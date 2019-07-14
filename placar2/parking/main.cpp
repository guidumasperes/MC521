#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int i, j, n1, n2, min, max, dif, result;
    vector<int> v;

    cin >> n1;
    for(i = 0; i < n1; i++) {
        cin >> n2;
        v.resize(n2);
        for(j = 0; j < n2; j++) {
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        min = v.front();
        max = v.back();
        dif = max - min;
        result = dif*2;
        cout << result << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int knapsack(int k, int d, vector<int> valf, vector<int> sizef) {
    if(k == -1) {
        return 0;
    } else if(d <= 0) {
        return 0;
    } else {
        if(sizef[k] > d) {
            return knapsack(k-1,d,valf,sizef);
        } else {
            return max(knapsack(k-1,d, valf, sizef), knapsack(k-1,d-sizef[k], valf, sizef)+valf[k]);
        }
    }
}

int main() {
    vector<int> val;
    vector<int> size;
    int s, n, i, a, b;

    cin >> s;
    cin >> n;
    val.resize(n);
    size.resize(n);
    for(i = 0; i < n; i++) {
        cin >> a;
        size[i] = a;
        cin >> b;
        val[i] = b;
    }
    cout << knapsack(n-1, s, val, size) << endl;
    return 0;
}
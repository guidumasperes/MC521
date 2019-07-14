#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i, tam, last, l, r, cnt = 0, n = 0;
    vector<int> arr;
    vector<char> seq;

    cin >> n;
    tam = n;
    l = 0;
    r = n-1;
    arr.resize(n);
    seq.resize(1);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(arr[0] <= arr[tam - 1]) {
        seq.push_back('L');
        cnt += 1;
        last = arr[l];
        l++;
        tam -= 1;
    } else {
        seq.push_back('R');
        cnt += 1;
        last = arr[r];
        r--;
        tam -= 1;
    }
    while(tam > 0 && (arr[l] > last || arr[r] > last)) {
        if (arr[l] < last) {
            seq.push_back('R');
            cnt += 1;
            last = arr[r];
            r--;
            tam -= 1;
        } else if(arr[r] < last) {
            seq.push_back('L');
            cnt += 1;
            last = arr[l];
            l++;
            tam -= 1;
        } else {
            if(arr[l] < arr[r]) {
                seq.push_back('L');
                cnt += 1;
                last = arr[l];
                l++;
                tam -= 1;
            }else if(arr[l] > arr[r]){
                seq.push_back('R');
                cnt += 1;
                last = arr[r];
                r--;
                tam -= 1;
            } else {
                seq.push_back('L');
                cnt += 1;
                last = arr[l];
                l++;
                tam -= 1;
            }
        }
    }
    printf("%d\n", cnt);
    for(i = 1; i < seq.size(); i++) {
        printf("%c", seq[i]);
    }
    printf("\n");
    return 0;
}
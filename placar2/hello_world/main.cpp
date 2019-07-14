#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int paste_cnt, impr, paste, i = 0;

    do {
        cin >> impr;
        i++;
        paste = 0;
        paste_cnt = 1;
        while(paste_cnt < impr){
            paste++;
            paste_cnt = 2*paste_cnt;
        }
        if(impr >= 0)
            cout << "Case " << i << ": " << paste << endl;
    }while(impr > 0);
    return 0;
}
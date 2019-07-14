#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    string  s, res = "";

    getline(cin, s);
    for(int j = 0; j < s.length(); j++) {
        if (s[j] == 'n') {
            s[j] = ' ';
            res += 'n';
            for (int k = 0; k < s.length(); k++) {
                if (s[k] == 'i') {
                    s[k] = ' ';
                    res += 'i';
                    for (int l = 0; l < s.length(); l++) {
                        if (s[l] == 'n') {
                            s[l] = ' ';
                            res += 'n';
                            for (int m = 0; m < s.length(); m++) {
                                if (s[m] == 'e') {
                                    s[m] = ' ';
                                    res += 'e';
                                    for (int n = 0; n < s.length(); n++) {
                                        if (s[n] == 't') {
                                            s[n] = ' ';
                                            res += 't';
                                            for (int o = 0; o < s.length(); o++) {
                                                if (s[o] == 'e') {
                                                    s[o] = ' ';
                                                    res += 'e';
                                                    for (int p = 0; p < s.length(); p++) {
                                                        if (s[p] == 'e') {
                                                            s[p] = ' ';
                                                            res += 'e';
                                                            break;
                                                        }
                                                    }
                                                    break;
                                                }
                                            }
                                            break;
                                        }
                                    }
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }
    while (res.length() > 1) {
        if(res.substr(0, 8) == "nineteen")
            count++;
        res.erase(0, 7);
    }
    cout << count << endl;
    return 0;
}
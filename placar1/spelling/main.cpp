#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <iterator>
#include<limits>

using namespace std;

int main() {
    int i, j, k, l, pos, num, indice_ant = 0;
    string str;
    list<char > :: iterator it;
    list<char> vetor[10]; //vetor de listas ligadas

    vetor[1].push_back(' ');
    vetor[2].push_back('a'); //inserir elementos nas listas
    vetor[2].push_back('b');
    vetor[2].push_back('c');
    vetor[3].push_back('d');
    vetor[3].push_back('e');
    vetor[3].push_back('f');
    vetor[4].push_back('g');
    vetor[4].push_back('h');
    vetor[4].push_back('i');
    vetor[5].push_back('j');
    vetor[5].push_back('k');
    vetor[5].push_back('l');
    vetor[6].push_back('m');
    vetor[6].push_back('n');
    vetor[6].push_back('o');
    vetor[7].push_back('p');
    vetor[7].push_back('q');
    vetor[7].push_back('r');
    vetor[7].push_back('s');
    vetor[8].push_back('t');
    vetor[8].push_back('u');
    vetor[8].push_back('v');
    vetor[9].push_back('w');
    vetor[9].push_back('x');
    vetor[9].push_back('y');
    vetor[9].push_back('z');

    cin >> num;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    for(i = 0; i < num; i++) {
        getline(cin, str);
        cout << "Case #" << i+1 << ": ";
        for(j = 0; j < str.size(); j++) {
            for(k = 1; k <= 9; k++) {
                for(pos = 1, it = vetor[k].begin(); it != vetor[k].end(); ++it, pos++) {
                    if(str[j] == *it) {
                        if(indice_ant == k) {
                            cout << " ";
                        }
                        for(l = 0; l < pos; l++) {
                            if(k == 1)
                                cout << 0;
                            else
                                cout << k;
                        }
                        indice_ant = k;
                    }
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
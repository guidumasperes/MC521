#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    vector<int> aux;
    stack<int> a_path;
    stack<int> b_path;
    stack<int> temp;
    int num = 1, i;

    cin >> num;
    v.resize(num);
    aux.resize(num);
    v[0] = 1;
    while(num != 0) {
        while(v[0]) {
            for (i = 0; i < num; i++) {
                scanf("%d", &v[i]);
                if (v[i] == 0)
                    break;
                aux[i] = i;
            }
            if(v[0] == 0) {
                cout << endl;
                break;
            }
            for (i = num - 1; i >= 0; i--)
                a_path.push(aux[i] + 1);
            for (i = 0; i < num; i++) {
                //cout << v[i] << endl;
                if (!a_path.empty() && a_path.top() <= v[i]) {
                    //cout << "entrou 1" << endl;
                    while (!a_path.empty() && a_path.top() != v[i]) {
                        //cout << "a_path.top() " << a_path.top() << endl;
                        temp.push(a_path.top());
                        a_path.pop();
                    }
                    if(!a_path.empty()) {
                        temp.push(a_path.top());
                        a_path.pop();
                    }
                }
                if (!temp.empty() && temp.top() == v[i]) {
                   /* cout << "entrou 2" << endl;
                    cout << "temp.top() 1 " << temp.top() << endl;*/
                    b_path.push(temp.top());
                    temp.pop();
                } else {
                   // cout << "entrou 3" << endl;
                    while (!temp.empty() && temp.top() != v[i]) {
                        //cout << "temp.top() 2 " << temp.top() << endl;
                        b_path.push(temp.top());
                        temp.pop();
                    }
                    if(!temp.empty()) {
                        b_path.push(temp.top());
                        temp.pop();
                    }
                }
                if (a_path.empty() && temp.empty())
                    break;
            }
            i = num - 1;
            /*cout << "vetor " << v[i] << endl;
            cout << "b_path.top() 2 " << b_path.top() << endl;*/
            while (!b_path.empty() && i >= 0 && b_path.top() == v[i]) {
                i--;
                //cout << b_path.top() << endl;
                b_path.pop();
            }
            //cout << i << endl;
            if (i == -1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
            while (!b_path.empty())
                b_path.pop();
            while (!a_path.empty())
                a_path.pop();
            while (!temp.empty())
                temp.pop();
        }
        cin >> num;
        v.resize(num);
        aux.resize(num);
        v[0] = 1;
    }
    return 0;
}
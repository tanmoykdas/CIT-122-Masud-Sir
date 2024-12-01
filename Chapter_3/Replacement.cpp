#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Give a text: ";
    string t;
    cin >> t;
    cout << "Replace text: ";
    string p;
    cin >> p;
    cout << "Give text that you want to add: ";
    string r;
    cin >> r;
    int b;
    for(int i = 0; i <= t.size() - p.size(); i++){
        int c = 0;
        for(int j = 0; j < p.size(); j++){
            if(t[j + i] == p[j]){
                c++;
            }
        }
        if(c == p.size()) {
            cout << c << " " << i << endl;
            b = i;
            break;
        }
    }

    t.replace(b, p.size(), r);
    for(auto x : t) cout << x;
}
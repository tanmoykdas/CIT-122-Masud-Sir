#include<bits/stdc++.h>
using namespace std;
int main() {
    cout << "Text length: ";
    int n;
    cin >> n;
    vector<char> t(n);
    cout << "Text: ";
    for(auto& x : t) cin >> x;
    cout << "Pattern length: ";
    int m;
    cin >> m;
    vector<char> p(m);
    cout << "Pattern: ";
    for(auto& x : p) cin >> x;
    for(int i = 0; i <= n - m; i++){
        int c = 0;
        for(int j = 0; j < m; j++){
            if(t[j + i] == p[j])
            c++;
        }
        if(c == m){
            auto beg = t.begin() + i;
            auto end = t.begin() + i + m;
            t.erase(beg, end);
        }
    }
    cout << "After deleting pattern: ";
    for(auto x : t) cout << x;
}
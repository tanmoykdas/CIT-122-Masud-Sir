#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Give a text: ";
    string s;
    cin >> s;
    cout << "Give a pattern: ";
    string p;
    cin >> p;
    for(int i = 0; i <= s.size() - p.size(); i++){
        int c = 0;
        for(int j = 0; j < p.size(); j++){
            if(s[j + i] == p[j]){
                c++;
            }
        }
        if(c == p.size()){
            cout << i << " ";
        }
    }
}
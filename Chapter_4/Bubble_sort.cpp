#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "number of elment consist your array: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Give elements: ";
    for(auto& x : a) cin >> x;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
    }
    cout << "The sorted array is: ";
    for(auto x : a) cout << x << " ";
}
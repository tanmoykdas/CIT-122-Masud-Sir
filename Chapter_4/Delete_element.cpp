#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "How many element consist your array: ";
    int n;
    cin >> n;
    int a[n];
    for(auto& x : a) cin >> x;
    cout << "The index you want to delete: ";
    int index;
    cin >> index;
    for(int i = index; i < n; i++){
        a[i - 1] = a[i];
    }
    n -= 1;
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}
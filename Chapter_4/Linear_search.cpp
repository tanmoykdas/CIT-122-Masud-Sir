#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "How many element contains your array: ";
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << "Insert the element you want to search: ";
    int temp;
    cin >> temp;
    a[n] = temp;
    int index;
    for(int i = 0; i < n + 1; i++){
        if(a[i] == temp){
            index = i;
            break;
        }
    }
    if(index == n) cout << "Not found";
    else cout << "Found in index: " << index + 1;
}
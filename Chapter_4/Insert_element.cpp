#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "How many element consist your array: ";
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Index where you want to insert: ";
    int index;
    cin >> index;
    cout << "The element you want to insert: ";
    int element;
    cin >> element;
    for(int i = n - 1; i >= index - 1; i--){
        a[i + 1] = a[i];
    }
    a[index - 1] = element;
    cout << "Now the array is: ";
    for(auto x : a) cout << x << " ";
}
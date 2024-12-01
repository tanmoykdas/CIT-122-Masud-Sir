#include<bits/stdc++.h>
using namespace std;
void BinarySearch(int* a, int left, int right, int item){
    int mid = (left + right) / 2;
    if(left < right){
        if(a[mid] == item){
            cout << "Found the item";
            return;
        }
        else if(item > a[mid])
            BinarySearch(a, mid + 1, right, item);
        else
            BinarySearch(a, left, mid - 1, item);
    } else {
        cout << "Don't found it.";
    }
}
int main(){
    cout << "The number of element of your array: ";
    int n;
    cin >> n;
    cout << "Insert the element: ";
    int a[n];
    for(auto& x : a) cin >> x;
    sort(a, a + n);
    cout << "Insert the item you want to search: ";
    int item;
    cin >> item;
    BinarySearch(a, 0, n, item);
}
#include<bits/stdc++.h>
using namespace std;
void InOrderTraverse(int* a, int index, int size){
    if(index >= size || a[index] == -1)
        return;
    InOrderTraverse(a, 2 * index + 1, size);
    cout << a[index] << " ";
    InOrderTraverse(a, 2 * index + 2, size);
}
int main(){
    cout << "Enter the number of node: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Insert the node and replace empty node with -1: ";
    for(auto& x : a) cin >> x;
    cout << "Inorder traverse: ";
    InOrderTraverse(a, 0, n);
}
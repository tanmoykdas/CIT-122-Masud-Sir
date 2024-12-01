#include<bits/stdc++.h>
using namespace std;
void PreOrderTraverse(int* a, int index, int size){
    if(index >= size || a[index] == -1)
        return;
    cout << a[index] << " ";
    PreOrderTraverse(a, 2 * index + 1, size);
    PreOrderTraverse(a, 2 * index + 2, size);
}
int main(){
    cout << "Enter the number of node: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Insert the node and replace empty node with -1: ";
    for(auto& x : a) cin >> x;
    cout << "Preorder traverse: ";
    PreOrderTraverse(a, 0, n);
}
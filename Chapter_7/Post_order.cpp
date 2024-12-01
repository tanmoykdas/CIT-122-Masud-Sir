#include<bits/stdc++.h>
using namespace std;
void PostOrderTraverse(int* a, int index, int size){
    if(index >= size || a[index] == -1)
        return;
    PostOrderTraverse(a, 2 * index + 1, size);
    PostOrderTraverse(a, 2 * index + 2, size);
    cout << a[index] << " ";
}
int main(){
    cout << "Enter the number of node: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Insert the node and replace empty node with -1: ";
    for(auto& x : a) cin >> x;
    cout << "Postorder traverse: ";
    PostOrderTraverse(a, 0, n);
}
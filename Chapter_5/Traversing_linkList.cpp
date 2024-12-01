#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL){}
};
Node* head = NULL;
void insert(int val){
    Node* newnode = new Node(val);
    if(!head){
        head = newnode;
        return;
    } else {
        Node* temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void display(){
    cout << "After traversing: ";
    for(Node* i = head; i; i = i->next) cout << i->data << " ";
}
int main(){
    cout << "How many node you want: ";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        insert(x);
    }
    display();
}
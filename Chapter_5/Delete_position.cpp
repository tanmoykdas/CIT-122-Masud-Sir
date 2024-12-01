#include<bits/stdc++.h>
using namespace std;
struct Node{
    string data;
    Node* next;
    Node(string val) : data(val), next(NULL){}
};
Node* head = NULL;
void insert(string val){
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
        newnode = head;
    }
}
void display(){
    for(Node* i = head; i; i = i->next) cout << i->data << " ";
}
int main(){
    cout << "Number of element that you want to insert: ";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        insert(x);
    }
    cout << "The list is: ";
    display();
    cout << "Give a position where you want to delete: ";
    int m;
    cin >> m;
}
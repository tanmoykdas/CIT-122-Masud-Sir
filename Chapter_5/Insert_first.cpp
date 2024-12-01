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
    } else{
        Node* temp;
        temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void display(){
    for(Node* i = head; i ; i = i->next) cout << i->data << " ";
}
void insert_first(string val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
int main(){
    cout << "How many data you want to insert: ";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        insert(s);
    }
    // display();
    cout << "Insert the element that you want to add at first: ";
    string s;
    cin >> s;
    insert_first(s);
    cout << "After inserting first: ";
    display();
}
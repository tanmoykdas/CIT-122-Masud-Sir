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
        Node* temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode = head;
    }
}
void display(){
    for(Node* i = head; i ; i = i->next) cout << i->data << " ";
}
void insert_position(string val, int m){
    Node* temp = head;
    Node* newnode = new Node(val);
    for(int i =0; i < m - 2 && temp; i++){
        temp = temp->next;
    }
    if(temp){
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
int main(){
    cout << "How many element you want to insert: ";
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        string s;
        cin >> s;
        insert(s);
    }
    display();
    cout << "Insert element that you want to add: ";
    string s;
    cin >> s;
    cout << "Insert the position you want to add: ";
    int m;
    cin >> m;
    insert_position(s, m);
    display();
    return 0;
}
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
    for(Node* i = head; i; i = i->next){
        cout << i->data << " ";
    }
    cout << endl;
}
void delete_first(){
    Node* temp = head;
    head = head->next;
    delete temp;
}
void delete_end(){
    if(!head) return;
    if(!head->next){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}
int main(){
    cout << "How many element you want to insert: ";
    int n;
    cin >> n; 
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        insert(x);
    }
    display();
    delete_first();
    display();
    delete_end();
    display();
}
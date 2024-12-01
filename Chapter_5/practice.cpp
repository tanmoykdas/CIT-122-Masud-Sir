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
    newnode = head;
  }
}
void display(){
  for(Node* i = head; i; i = i->next) cout << i->data << " ";
  cout << endl;
}
void insert_first(int val){
  Node* newnode = new Node(val);
  Node* temp = head;
  newnode->next = head;
  head = newnode;
}
void insert_last(int val){
  Node* newnode = new Node(val);
  Node* temp = head;
  while(temp->next){
    temp = temp->next;
  }
  temp->next = newnode;
  newnode = head;
}
void insert_position(int val, int k){
  Node* newnode = new Node(val);
  Node* temp = head;
  for(int i = 0; i < k - 2 && temp; i++){
    temp = temp->next;
  }
  if(temp){
    newnode->next = temp->next;
    temp->next = newnode;
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    insert(x);
  }
  display();
  int m;
  cin >> m;
  insert_first(m);
  display();
  insert_last(m);
  display();
  int k;
  cin >> k;
  insert_position(m, k);
  display();
  return 0;
}
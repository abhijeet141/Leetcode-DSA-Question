#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node *head;
void insert(int x){
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void print(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}

void rev_print(Node *p){
    if(p == NULL){
        return;
    }
    rev_print(p->next);
    cout<<p->data;
}


int main(){
    head = NULL;
     int n,x;
    cout<<"Enter Number of elements \n";
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"Enter Elements: \n";
        cin>>x;
        insert(x);
        print();
    }
    rev_print(head);
}
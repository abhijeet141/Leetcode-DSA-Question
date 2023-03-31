#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};

Node *head;

void insert(int x){
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}

void print(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}

int main(){
    head = NULL;
    int n,x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        insert(x);
        print();
    }
}

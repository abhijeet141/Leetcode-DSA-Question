#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head;

void insert(int x){
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        Node *temp1 = head;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void print(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
}

void reverse(){
    Node *next,*curr,*prev;
    prev = NULL;
    curr = head;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
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
    reverse();
    print();
}
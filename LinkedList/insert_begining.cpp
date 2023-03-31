#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *link;
};

Node *head;

void insert(int x){
    Node *temp = new Node();
    temp->data = x;
    temp->link = head;
    head = temp;
}

void print(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->link;
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

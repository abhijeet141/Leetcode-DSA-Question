#include<bits/stdc++.h>
using namespace std;

struct Node{
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
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}

int main(){
    head = NULL;
    int n,x;
    cout<<"Enter Number Of Elements : \n";
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"Enter Elements : ";
        cin>>x;
        insert(x);
        print();
    }
}
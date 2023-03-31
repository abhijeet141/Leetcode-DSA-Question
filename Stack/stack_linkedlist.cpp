#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *top;

void push(int x){
    Node *temp = new Node;
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop(){
    if(top == NULL){
        return;
    }
    Node *temp = top;
    top = temp->next;
    delete(temp);
}

void print(){
    Node *temp = top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    top = NULL;
    push(5);
    push(10);
    print();
    pop();
    print();


}
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* link;
};
Node *head;
int main(){
    head = NULL;
    Node* temp = new Node();
    temp -> data = 4;
    temp -> link = NULL;
    head = temp;
    temp = new Node();
    temp->data = 6;
    temp->link = NULL;
    Node* temp1 = head;
    while(temp1->link != NULL){
        temp1 = temp1->link;
    }
    temp1->link = temp;
}
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

void insert(int x){
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
    Node * temp1 = head;
    while(temp1->next!=nullptr){
        temp1 = temp1 -> next;
    }
    temp1->next = temp;
    }
}

void insert_position(int data, int y){
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(y == 1){
        temp->next = head;
        head = temp;
    }
    else{
        Node *temp1 = head;
        for(int i = 0; i< y-2;i++){
            temp1 = temp1->next;
        }
        temp->next = temp1->next;
        temp1->next = temp;
    }
}

void print(){
    Node*temp = head;
    cout<<"LinkedList is : \n";
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    head = NULL;
    int n,x,y,data;
    cout<<"Enter Number Of Elements : \n";
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"Enter Elements : ";
        cin>>x;
        insert(x);
        print();
    }
    cout<<"Enter value to insert: ";
    cin>>data;
    cout<<"Enter position to insert: ";
    cin>>y;
    insert_position(data,y);
    print();
}
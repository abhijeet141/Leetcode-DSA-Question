#include<bits/stdc++.h>
using namespace std;

int a[101];
int top = -1;

void push(int x){
    if(top == 102){
        cout<<"Stack Overflow";
    }
    top = top + 1;
    a[top] = x;

}

void pop(){
    if(top == -1){
        cout<<"No Element to pop";
    }
    top = top - 1;
}

int Top(){
    return a[top];
}

int isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

void print(){
    for(int i = 0;i<=top;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    push(10);
    print();
    push(20);
    print();
    push(30);
    print();
    push(40);
    print();
    push(50);
    print();
    pop();
    print();
    pop();
    print();
    cout<<Top();
    cout<<isEmpty();
}
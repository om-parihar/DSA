#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

class stack{
    Node *top;
    int size;

    public:
    stack(){
        top=NULL;
        size=0;
    }

    //push
    void push(int x){
        Node *temp=new Node(x);
        if(temp==NULL){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        temp->next=top;
        top=temp;
        size++;
        cout<<"pushed "<<x<<" into the stack"<<endl;
    }

    //pop
    void pop(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }
        else{
            Node *temp=top;
            cout<<"Popped "<<top->data<<" from the stack"<<endl;
            top=top->next;
            delete temp;
            size--;
        }
    }

    //peek
    int peek(){
        if(top==NULL){
            cout<<"Stack is Empty\n";
            return -1;
        }
        else{
            return top->data;
        }
    }

    //IsEmpty
    bool IsEmpty(){
        return top==NULL;
    }

    //IsSize
    int IsSize(){
        return size;
    }
};

int main(){
    stack s;
    s.push(6);
    s.push(4);
    s.push(2);
    s.pop();
    s.pop();
    cout<<s.IsEmpty()<<endl;
    cout<<s.IsSize()<<endl;

}
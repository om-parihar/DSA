#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data=val;
            next=NULL;
        }
};

class Queue{
    Node* front;
    Node* rear;
    public:
        Queue(){
            front=rear=NULL;
        }
        bool IsEmpty(){
            return front==NULL;
        }
        void push(int x){
            if(IsEmpty()){
                front=new Node(x);
                rear=front;
                cout<<"Pushed "<<x<<" into the Queue"<<endl;
                return;
            }
            else{
                rear->next=new Node(x);
                if(rear->next==NULL){
                    cout<<"Queue Overflow"<<endl;
                    return;
                }
                cout<<"Pushed "<<x<<" into the Queue"<<endl;
                rear=rear->next;
            }
        }
        void pop(){
            if(IsEmpty()){
                cout<<"Queue Underflow"<<endl;
            }
            else{
                Node* temp=front;
                front=front->next;
                cout<<"Poped "<<temp->data<<" from the Queue"<<endl;
                delete temp;
            }
        }
        int start(){
            if(IsEmpty()){
                cout<<"Queue is Empty"<<endl;
            }
            else{
                return front->data;
            }
        }
};

int main(){
    Queue q1;
    q1.push(5);
    q1.push(6);
    q1.push(1);
    q1.push(3);
    q1.push(2);
    q1.pop();
    q1.pop();
    q1.pop();
    q1.pop();
    cout<<q1.start()<<endl;
}
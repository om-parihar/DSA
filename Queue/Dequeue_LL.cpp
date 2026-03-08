#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

class Dequeue{
    Node* front, *rear;
    public:
    Dequeue(){
        front=rear=NULL;
    }
    
    //push front
    void push_front(int x){
        if(front==NULL){
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" in front of the Dequeue"<<endl;
        }
        else{
            Node* temp=new Node(x);
            temp->next=front;
            front->prev=temp;
            front=temp;
            cout<<"Pushed "<<x<<" in front of the Dequeue"<<endl;
        }
    }
    //push back
    void push_back(int x){
        if(front==NULL){
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" at back of the Dequeue"<<endl;
        }
        else{
            Node* temp=new Node(x);
            rear->next=temp;
            temp->prev=rear;
            rear=temp;
            cout<<"Pushed "<<x<<" at back of the Dequeue"<<endl;
        }
    }
    //pop front
    void pop_front(){
        if(front==NULL){
            cout<<"Dequeue underflow"<<endl;
            return;
        }
        else{
            Node* temp=front;
            cout<<"Popped "<<temp->data<<" from front"<<endl;
            front=front->next;
            delete temp;
            // Greater than 1 Node
            if(front){
                front->prev=NULL;
            }
            // 1 Node
            else{
                rear=NULL;
            }
        }
    }
    //pop back
    void pop_back(){
        if(front==NULL){
            cout<<"Dequeue underflow"<<endl;
            return;
        }
        else{
            Node* temp=rear;
            cout<<"Popped "<<temp->data<<" from back"<<endl;
            rear=rear->prev;
            delete temp;
            // Greater than 1 Node
            if(rear){
                rear->next=NULL;
            }
            // 1 Node
            else{
                front=NULL;
            }
        }
    }
    //start
    int start(){
        if(front==NULL){
            return -1;
        }
        else{
            return front->data;
        }
    }
    //end
    int end(){
        if(front==NULL){
            return -1;
        }
        else{
            return rear->data;
        }
    }

};

int main(){
    Dequeue d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_front(9);
    d.push_front(8);
    d.push_front(7);
    d.push_front(6);
    d.pop_front();
    d.pop_front();
    d.pop_front();
    d.pop_back();
    d.pop_back();
    d.pop_back();
    d.pop_back();
    cout<<d.start()<<endl;
    cout<<d.end()<<endl;

    return 0;
}
#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int front,rear,size;

   public:

    // Constructor
    Queue(int n){
        arr=new int[n];
        size=n;
        front=rear=-1;
    }

    // If Queue is empty or not

    bool IsEmpty(){
        return front==-1;
    }

    // Queue is full or not
    
    bool IsFull(){
        return (rear+1)%size==front;
    }

    // Push element into queue

    void push(int x){
        // Empty
        if(IsEmpty()){
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"Pushed "<<x<<" into the queue"<<endl;
        }
        // Full
        else if(IsFull()){
            cout<<"Queue Overeflow"<<endl;
            return;
        }
        // Insert
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"Pushed "<<x<<" into the queue"<<endl;
        }
    }

    // Pop element
    void pop(){
        //Empty
        if(IsEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        else{
            if(front==rear){
                cout<<"Poped "<<arr[front]<<" from the queue"<<endl;
                front=rear=-1;

            }
            else{
                cout<<"Poped "<<arr[front]<<" from the queue"<<endl;
                front=(front+1)%size;
            }
        }
    }
    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};

int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.push(5);
    q.push(6);
    q.pop();
    cout<<q.start()<<endl;
    cout<<q.IsEmpty()<<endl;
    cout<<q.IsFull()<<endl;
}   
#include<iostream>
using namespace std;

class stack{
    int *arr;
    int size;
    int top;

    public:
    bool flag;

    // Constructor
    stack(int s){
        size=s;
        top=-1;
        arr= new int [s];
        flag=1;
    }

    //push
    void push(int x){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
            return; 
        }
        else{
            top++;
            arr[top]=x;
            cout<<"Pushed "<<x<<" into the stack"<<endl;
            flag=0;
        }
    }

    //pop
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else{
            cout<<"Popped the "<<arr[top]<<" from the stack"<<endl;
            top--;
            if(top==-1){
                flag=1; 
            }
        }
    }
    
    //peek
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    
    //IsEmpty
    bool IsEmpty(){
        return top==-1;
    }
    
    //IsSize
    int IsSize(){
        return top+1;
    }

};

int main(){
    stack s(6);
    int val = s.peek();
    if (s.flag==0)
    cout<<val<<endl;

}
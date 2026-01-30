#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

Node *CreateLinkedList(int arr[],int index,int size){
    if(index==size) return NULL;
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=CreateLinkedList(arr,index+1,size);
    return temp;
}


int main(){
    Node *head;
    head=NULL;

    int arr[]={10,20,30,40,50};
    head=CreateLinkedList(arr,0,5);

    //Delete at any Position
    int x=2;
    Node *temp,*curr;
    temp=head;
    while(x){
        curr=temp;
        temp=temp->next;
        x--;
    }
    temp=temp->next;
    curr->next=temp;
    

    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
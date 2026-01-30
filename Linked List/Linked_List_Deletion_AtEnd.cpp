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

Node *CreateLinkedList(int arr[], int index, int size){
    if(index==size) return NULL;
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=CreateLinkedList(arr,index+1,size);
    return temp;
}


int main(){
    Node *Head;
    Head=NULL;

    int arr[]={10,20,30,40,50};

    Head=CreateLinkedList(arr,0,5);

    //delete at end
    if(Head!=NULL){

        //Only one node is present
        if(Head->next==NULL){
            delete Head;
            Head=NULL;
        }
        //More than one node
        else{
            Node *curr=Head;
            Node *prev=NULL;
            while(curr->next!=NULL){
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            delete curr;
        }
    }

    Node *temp;
    temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
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
    //Base case
    if(index==size) return NULL;

    Node *Temp;
    Temp=new Node(arr[index]);
    Temp->next=CreateLinkedList(arr,index+1,size);
    return Temp;
}

int main(){
    Node *Head;
    Head=NULL;

    int arr[]={10,20,30,40,50};
    
    Head=CreateLinkedList(arr,0,5);


    //Delete a Node at start
    
    if(Head!=NULL){
        Node *Temp=Head;
        Head=Head->next;
        delete Temp;        // free(Temp); works same
    }

    //Print Linked List
    Node *Temp;
    Temp=Head;
    while(Temp!=NULL){
        cout<<Temp->data<<" ";
        Temp=Temp->next;
    }
    
}
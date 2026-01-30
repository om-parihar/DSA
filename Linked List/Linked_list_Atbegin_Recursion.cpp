// Insertion of linked list at begining

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

Node* CreateLinkedList(int arr[], int index, int size, Node* prev){
    //Base case
    if(index==size) return prev;

    Node* temp;
    temp=new Node(arr[index]);
    temp->next=prev;
    return CreateLinkedList(arr,index+1,size,temp);

}

int main(){
    Node *Head;
    Head=NULL;
    
    int arr[]={10,20,30,40,50};

    Head=CreateLinkedList(arr,0,5,Head);

    //Print value
    Node* temp;
    temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
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

Node* CreateLinkedList(int arr[],int index, int size){
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


    //Insertion at any position
    int x=3; //insert position
    int value=35;

    Node *temp;
    temp=Head;
    x--;
    while(x){
        temp=temp->next;
        x--;
    }
    Node *temp2;
    temp2=new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;



    //Print the value
    temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
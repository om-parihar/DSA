#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};

Node* Createdll(int arr[], int index, int size, Node*back){
    if(index==size) return NULL;

    Node *temp=new Node(arr[index]);
    temp->prev=back;
    temp->next=Createdll(arr,index+1,size,temp);
    return temp;
}

int main(){
    Node *head=NULL;
    int arr[]={1,2,3,4,5};
    head=Createdll(arr,0,5,NULL);

    Node *trav;
    trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}


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

int main(){
    Node *head=NULL, *tail;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new Node(arr[i]);
            tail=head;
        }
        else{
            Node *temp;
            temp=new Node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }

    int pos=2;

    Node *trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
    cout<<endl;

    if(pos==1){     
        if(head->next==NULL){
            delete head;
            head=NULL;
        }
        else{
            Node *temp=head;
            head=head->next;
            delete temp;
            head->prev=NULL;
        }
    }
    else{
        Node *curr=head;
        while(--pos){
            curr=curr->next;
        }
        if(curr->next==NULL){
            curr->prev->next=NULL;
            delete curr;
        }
        else{ 
            curr->prev->next=curr->next;
            curr->next->prev=curr->prev;
            delete curr;
        }
    }
    
    trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}
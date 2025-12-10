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
    Node *head=NULL,*tail=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new Node(arr[i]);
            tail=head;
        }
        else{
            Node *temp=new Node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }

    int pos=2;
    if(pos==0){
        if(!head){
            head=new Node(6);
        }
        else{
        Node *temp=new Node(6);
        temp->next=head;
        head->prev=temp;
        head=temp;
        }
    }
    else{
        Node *curr=head;
        while(--pos){
            curr=curr->next;
        }
        if(curr->next==NULL){
            Node *temp=new Node(6);
            curr->next=temp;
            temp->prev=curr;
        }
        else{
            Node *temp=new Node(6);
            temp->prev=curr;
            temp->next=curr->next;
            curr->next=temp;
            temp->next->prev=temp;
        }
    }




    Node *trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next; 
    }
}
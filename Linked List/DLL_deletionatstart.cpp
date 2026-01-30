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
    Node *head=NULL, *tail=NULL;
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
    
    Node *trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
    cout<<endl;
    
    if(head!=NULL){
        Node*temp=head;
        head=head->next;
        delete temp;
        if(head){
            head->prev=NULL;
        }
    }
    trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}
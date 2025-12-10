// Array to Linked List Conversion

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

int main(){
    Node *Head,*Tail;
    Tail=Head=NULL;
    int arr[]={10,20,30,40,50};
    //insert the value at end
    for (int i = 0; i < 5; i++)
    {
        // linked list is empty
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail=Head;

        }
    
    //linked list exist krti ho
        else
        {
            Tail->next=new Node(arr[i]);
            Tail=Tail->next;
        }
    }
    Node *temp;
    temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
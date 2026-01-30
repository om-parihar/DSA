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

Node* Create_Linked_List(int arr[], int index, int size)
{
    //Base case
    if(index==size) return NULL;

    Node* Temp;
    Temp=new Node(arr[index]);
    Temp->next=Create_Linked_List(arr,index+1,size);

    return Temp;
}


int main(){
    Node *Head;
    Head=NULL;
    
    int arr[]={10,20,30,40,50};
    Head=Create_Linked_List(arr,0,5);

    Node* temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
#include<iostream>
#include<vector>
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

Node *Create_Linked_List(int arr[],int index,int size){
    if(size==index){
        return NULL;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=Create_Linked_List(arr,index+1,size);
    return temp;
}

int main(){
    Node *head;
    head=NULL;
    vector<int> res;
    int arr[]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        head=Create_Linked_List(arr,0,5);
    }
    Node *temp;
    temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        res.push_back(temp->data);
        temp=temp->next;
    }
    temp=head;
    for(int i=res.size()-1;i>=0;i--){
        temp->data=res[i];
        temp=temp->next;
    }
    cout<<endl;
    temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
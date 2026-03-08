#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
  int data;
  Node* left;
  Node* right;
  Node(int val){
      data=val;
      left=NULL;
      right=NULL;
  }
};


int main(){
    int x;
    cout<<"Enter root value ";
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node* root=new Node(x);
    q.push(root);
    
    // Build Binary Tree
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<" ";
        cin>>first;         //left child
        //Left Node
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter the right child "<<temp->data<<" ";
        cin>>second;         //right child
        //Right Node
        if(second!=-1){
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }
}
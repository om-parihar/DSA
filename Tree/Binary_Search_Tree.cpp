#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node*left,*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

Node* insert(Node*root,int target){

    if(!root){
        Node* temp=new Node(target);
        return temp;
    }
    if(root->data<target){
        root->right=insert(root->right,target);
    }
    else{
        root->left=insert(root->left,target);
    }
    return root;
}

void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    int arr[]={6,5,25,41,75,4,8};
    Node* root=NULL;
    
    for(int i=0;i<7;i++){
        root=insert(root,arr[i]);
    }

    // Traverse
    inorder(root);

}
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

void PreOrder(Node* root){
    if(root==NULL) return;
    cout<<root->data;
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(Node* root){
    if(root==NULL) return;
    InOrder(root->left);
    cout<<root->data;
    InOrder(root->right);
}

void PostOrder(Node* root){
    if(root==NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data;
}

Node* Binarytree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* temp=new Node(x);
    //Create Left Side
    cout<<"Enter the left child of "<<x<<" ";
    temp->left=Binarytree();
    //Create Right Side
    cout<<"Enter the right child of "<<x<<" ";
    temp->right=Binarytree();
    return temp;
}

int main(){
    cout<<"Enter the root node ";

    Node* root;
    root=Binarytree();

    cout<<"Pre-Order Traversal: "<<" ";
    PreOrder(root);
    cout<<endl;

    cout<<"In-Order Traversal: "<<" ";
    InOrder(root);
    cout<<endl;

    cout<<"Post-Order Traversal: "<<" ";
    PostOrder(root);
    cout<<endl;

}
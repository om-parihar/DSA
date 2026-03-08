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

}
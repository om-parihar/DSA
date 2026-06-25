#include<iostream>
using namespace std;

void heapify(int arr[],int index,int n){
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;

    if(left<n&&arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n&&arr[right]>arr[largest]){
        largest=right;
    }

    if(largest!=index){
        swap(arr[index],arr[largest]);
        heapify(arr,largest,n);
    }
}

void BuildMaxHeap(int arr[],int n){
    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,i,n);
    }
}

void sortArray(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        swap(arr[i],arr[0]);
        heapify(arr,0,i);
    }
}

void PrintMaxHeap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={10,3,8,9,5,13,18,14,11,70};
    BuildMaxHeap(arr,10);
    sortArray(arr,10);
    PrintMaxHeap(arr,10);
}
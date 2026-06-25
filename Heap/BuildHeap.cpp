#include<iostream>
using namespace std;

void heapify(int arr[],int index, int n){
    //heapifydown
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
        swap(arr[largest],arr[index]);
        heapify(arr,largest,n);
    }
}

// void heapifyUp(int arr[],int index){
//     while(index>0&&arr[(index-1)/2]>arr[index]){
//         swap(arr[index],arr[(index-1)/2]);
//         index=(index-1)/2;
//     }
// }

void printHeap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void BuildMaxHeap(int arr[],int n){
    //Step Down Approach
    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,i,n);
    }

    //Step Up Approach
    //for(int i=1;i<n;i++){
    //heapify(arr,i);
    //}
}

int main(){
    int arr[]={10,3,8,9,5,13,18,14,11,70};
    BuildMaxHeap(arr,10);
    printHeap(arr,10);
}
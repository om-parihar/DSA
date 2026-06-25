#include<iostream>
using namespace std;

class MaxHeap{
public:
    int *arr;
    int size;
    int total_size;

    MaxHeap(int n){
        arr=new int[n];
        size=0;
        total_size=n;
    }

    void insert(int value){
        if(size==total_size){
            cout<<"Heap Overflow"<<endl;
            return;
        }   

        arr[size]=value;
        int index=size;
        size++;

        while(index>0&&arr[(index-1)/2]<arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index=(index-1)/2;
        }

        cout<<value<<" inserted in the Max heap"<<endl;
    }

    void heapify(int index){
        int largest=index;
        int left=2*index+1;
        int right=2*index+2;
        
        if(left<size&&arr[left]>arr[largest]){
            largest=left;
        }
        if(right<size&&arr[right]>arr[largest]){
            largest=right;
        }

        if(largest!=index){
            swap(arr[largest],arr[index]);
            heapify(largest);
        }
    }

    void Delete(){
        if(size==0){
            cout<<"Heap Underflow"<<endl;
        }

        cout<<arr[0]<<" is deleted from Max heap"<<endl;
        arr[0]=arr[size-1];
        size--;
        if(size==0){
            return;
        }

        heapify(0);

    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    MaxHeap h1(7);
    h1.insert(10);
    h1.insert(10);
    h1.insert(50);
    h1.Delete();
    h1.insert(40);
    h1.insert(30);
    h1.Delete();
    h1.insert(20);

    h1.print();

}
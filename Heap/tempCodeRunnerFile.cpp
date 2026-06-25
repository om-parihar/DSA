for(int i=n-1;i>=0;i--){
        swap(arr[i],arr[0]);
        heapify(arr,0,i);
    }
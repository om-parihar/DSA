#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};

    int *ptr=arr;

    //address of 0 index in array
    cout<<arr<<endl;
    cout<<(arr+0)<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    //value of 0 index in array
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;
}

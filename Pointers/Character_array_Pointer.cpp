#include<iostream>
using namespace std;

int main(){

    char name='a';
    char *pr=&name;
    cout<<pr<<endl;
    cout<<(void*)pr<<endl;

    char arr[6]="12345";
    char *ptr=arr;
    cout<<ptr<<endl; // prints the string until null character is found
    cout<<(void*)arr<<endl; // prints the string address
    cout<<(void*)ptr<<endl;
    cout<<static_cast<void*>(arr)<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}
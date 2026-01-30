#include<iostream>
using namespace std;

void swapping(int *ptr1, int *ptr2){
    int *temp;
    *temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*temp;
}

int main(){
    int first=10;
    int second=20;
    swapping(&first, &second);
    cout<<first<<" "<<second;
}

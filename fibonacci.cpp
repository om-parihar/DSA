#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    int sum;
    for(int i=0;i<6;i++){
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}
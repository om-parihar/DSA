#include<iostream>
using namespace std;

void fun1(int n){
    if(n==0){
        return;
    }
    cout<<"Happy Birthday\n";
    fun1(n-1);
}

int main(){
    fun1(5);
}
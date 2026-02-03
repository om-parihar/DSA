#include<iostream>
using namespace std;

int main(){
    try{
        int a,b;
        cin>>a>>b;
        if(b==0){
            throw "Division by Zero";
        }
        int c=a/b;
        cout<<c;
    }
    catch(const char *e){
        cout<<"Exception Occured : "<<e<<endl;

    }
}
#include<iostream>
using namespace std;

class Person{
    int a,b;

    public:

    Person(int a,int b){
        this->a=a;
        this->b=b;
        if(b==0){
            throw "Division by Zero";
        }
        int c=a/b;
    }

    string dis(){
        if(b==0){
            return "Division by Zero";
        }
    }
};

int main(){
    try{
        Person a(1,0);
    }
    catch(const char *e){
        cout<<"Exception Occured : "<<e<<endl;
    }
}
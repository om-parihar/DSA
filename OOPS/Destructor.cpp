#include<iostream>
using namespace std;

class Customer{
    string name;
    int *data;

    public:
    
    //Constructor (it creates the object)
    Customer(){
        name="Rohit";
        data= new int;
        *data=10;
        cout<<"Constructor is called\n";
    }
    
    //Destructor (it is used to delete the object and free up space)
    ~Customer(){
        delete data;
        cout<<"Destructor is called";
    }

};

int main(){
    Customer A1;
}
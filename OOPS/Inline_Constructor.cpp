#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_number,balance;

    public:
    //Default Constructor
    Customer(){
        cout<<"Constructor is called!"<<endl;
    }

    
    //Constructor overloading
    Customer(string a, int acc){
        name=a;
        acc_number=acc;
    }

    //Inline Constructor

    inline Customer(string a, int b, int c): name(a), acc_number(b), balance(c){
        
    }

    //Display function

    void display(){
        cout<<name<<" "<<acc_number<<" "<<balance<<endl;
    }
};

int main(){
    Customer A1;

    Customer A2("Rahul",123,1000);
    A2.display();

    Customer A3("Krish",12);
    A3.display();

}
#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_number, balance;

    public:
    Customer(string a, int b, int c){
        name=a;
        acc_number=b;
        balance=c;
    }

    Customer(){

    }

    //Copy Constructor

    Customer(Customer &B){
        name=B.name;
        acc_number=B.acc_number;
        balance=B.balance;
    }

    void display(){
        cout<<name<<" "<<acc_number<<" "<<balance<<endl;
    }
};

int main(){
    Customer A1("Rahul",123,1000);
    A1.display();

    Customer A2(A1);
    A2.display();

    Customer A3;
    A3=A1;
    A3.display();
    
}
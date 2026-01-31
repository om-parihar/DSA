#include<iostream>
using namespace std;

class Customer{
    string name;
    int balance,acc_number;
    static int total_customer;

    public:
    Customer(string a, int b, int c){
        name=a;
        balance=b;
        acc_number=c;
        total_customer++;
    }    
    
    void display(){
        cout<<name<<" "<<balance<<" "<<acc_number<<" "<<total_customer<<endl;
    }

};

int Customer::total_customer=0;     //:: this is resolution operator

int main(){
    Customer A1("Krish",1,1000);
    Customer A2("King",2,2000);
    A1.display();
    A2.display();
    Customer A3("Kholi",3,3000);
    A3.display();
}
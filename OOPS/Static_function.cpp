#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_num,bal;
    static int total_customer;

    public:
    Customer(string a, int b, int c){
        name=a;
        bal=b;
        acc_num=c;
        total_customer++;
    }


    static void acctotal(){
        cout<<total_customer<<endl;;
    }

    // void display(){
    //     cout<<total_customer<<endl;
    // }

};

int Customer::total_customer=0;

int main(){
    Customer A1("Rohit",1,1000);
    Customer A2("King",2,3000);
    // A1.acctotal();
    Customer::acctotal();
}
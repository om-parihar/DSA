#include<iostream>
using namespace std;

class Customer{
    string name;
    int bal,accnum;
    static int totbal;

    public:
    Customer(string a, int b, int c){
        name=a;
        bal=c;
        accnum=b;
        totbal+=bal;
    }

    void deposit(int amount){
        if(amount>0){
            bal+=amount;
            totbal+=amount;
        }
        else{
            cout<<"Invalid amount"<<endl;
        }
    }

    void withdraw(int amount){
        if(bal>=amount && amount>0){
            bal-=amount;
            totbal-=amount;
        }
        else{
            cout<<"Invalid amount"<<endl;
        }
    }

    void showBalance(){
        cout<<"Customer balance: "<<bal<<endl;
    }

    static void displaybal(){
        cout<<"Total Balance: "<<totbal<<endl;
    }

};

int Customer::totbal=0;

int main(){
    Customer A1("Rohit",1,1000);
    Customer A2("King",2,2000);
    Customer::displaybal();
    A1.deposit(800);
    A2.withdraw(300);
    Customer::displaybal();
    A1.showBalance();
    A2.showBalance();
}
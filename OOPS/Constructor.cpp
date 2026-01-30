#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_number,balance;
    int *roi;

    public:
    //Default Constructor
    Customer(){
        name="King";
        acc_number=126;
        balance=3432;
        roi=new int[100];
    }

    //Parametric Constructor
    Customer(string name, int acc_number, int balance){
        this->name=name;
        this->acc_number=acc_number;            //this-> (address store karta hai) is used to tell name is of main class and other name is parameter
        this->balance=balance;
    }
    
    //Constructor overloading
    Customer(string a, int acc){
        name=a;
        acc_number=acc;
    }

    //Display function

    void display(){
        cout<<name<<" "<<acc_number<<" "<<balance<<endl;
    }
};

int main(){
    Customer A1;
    A1.display();

    Customer A2("Rahul",123,1000);
    A2.display();

    Customer A3("Krish",12);
    A3.display();

}
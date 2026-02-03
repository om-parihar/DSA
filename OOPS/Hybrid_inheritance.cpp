#include<iostream>
using namespace std;

class Human{
    public:
    string name;
    void display(){
        cout<<"I am "<<name<<endl;
    }
};

class Student{
    public:
    string subject;
    void stu_sub(){
        cout<<"Currently i am studying "<<subject<<endl;
    } 
};

class Male:public Human, public Student{
    public:
    //default constructor
    Male(){
        
    };

    Male(string name, string subject){
        this->name=name;
        this->subject=subject;
    }
    void dis(){
        cout<<"my name is "<<name<<" currently studying "<<subject<<endl;
    }
};

int main(){
    Male A("King","DSA");
    A.dis();

}
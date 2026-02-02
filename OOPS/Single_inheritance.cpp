#include<iostream>
using namespace std;

class Person{
    string name;
    
    public:
    void Percall(){
        cout<<"I am Person class"<<endl;
    }
};

class Teacher: public Person{
    protected:
    int salary=0;

    public:
    void Per_Salary(){
        cout<<"My salary is: "<<salary<<endl;
    }
};


int main(){
    Teacher A;
    A.Per_Salary();
    A.Percall();
}
#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    
    public:
    void set_name(string a){
        name=a;
    }
    
    void dis_name(){
        cout<<"Person name is: "<<name<<endl;
    }
};


class Teacher: public Person{
    protected:
    int salary;

    public:
    void set_salary(int b){
        salary=b;
    }

    void dis_sal(){
        cout<<name<<" salary is "<<salary<<endl;
    }
};

class Manager: public Teacher{
    protected:
    string department;

    public:
    void set_department(string dept){
        department=dept;
    }

    void dis_dept(){
        cout<<name<<" department is "<<department<<endl;
    }
};

int main(){
    Manager a;
    a.set_name("og");
    a.dis_name();
    a.set_department("Finance");
    a.dis_dept();
    a.set_salary(2000);
    a.dis_sal();

}
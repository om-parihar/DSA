#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age,roll_number;
    string grade;

    void set_name(string n){
        name=n;
    }

    void set_age(int a){
        age=a;
    }

    void set_roll_number(int roll){
        roll_number=roll;
    }

    void set_grade(string a){
        grade=a;
    }

};

int main(){
    Student s1;
    s1.name="rahul";
    s1.age=18;
    s1.roll_number=124;
    s1.grade="A++";
    cout<<s1.name<<" ";

    Student s2;
    s2.name="krish";
    s2.age=12;
    s2.roll_number=1234;
    s2.grade="B++";
    cout<<s2.name<<" ";

    Student s3;
    s3.set_name("king");
    s3.set_age(12);
    s3.set_roll_number(12546);
    s3.set_grade("A++");
    
    cout<<s3.name<<" ";
    cout<<s3.age<<" ";
    cout<<s3.roll_number<<" ";
    cout<<s3.grade<<" ";

} 
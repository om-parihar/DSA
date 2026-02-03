#include<iostream>
using namespace std;

class Person{
    public:
    virtual void speak()=0;     //Pure Virtual class (It will only work if speak function is present in all the class)
};

class Student: public Person{
    public:
    void speak(){
        cout<<"I am a student"<<endl;
    }
};

int main(){
    Person *a;
    a=new Student();
    a->speak();
}
#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;

    public:
    Complex(){
        // virtual void speak()=0       //Abstract class (Pure Virtual Class)
    };

    Complex(int real, int img){
        this->real=real;
        this->img=img;
    };

    void display(){
        cout<<real<<" +i"<<img<<endl;
    }

    Complex operator +(Complex &C){
        Complex ans;
        ans.real=real+C.real;
        ans.img=img+C.img;
        return ans; 
    }

};

int main(){
    Complex C1(3,4);
    Complex C2(4,3);
    Complex C3=C1+C2;
    C3.display();
}
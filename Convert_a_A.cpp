#include<iostream>
using namespace std;
char Convert(char name){
    char ch=name-'a'+'A';
    return ch;
}
int main(){
    char name;
    cin>>name;
    cout<<Convert(name);
}
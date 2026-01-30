#include<iostream>
#include<math.h>
using namespace std;

int CountDigits(int num){
    int d=0;
    while(num){
        num/=10;
        d++;
    }
    return d;
}

int Armstong(int num, int d){
    int n=num;
    int ans=0;
    int rem;
    while(n){
        rem=n%10;
        n/=10;
        ans=ans+pow(rem,d);
    }
    if(ans==num){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){
    int num;
    cin>>num;
    int d=CountDigits(num);
    cout<<Armstong(num,d);
}
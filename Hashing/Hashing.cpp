#include<iostream>
using namespace std;
#include<unordered_map>

//This is unordered hash map taking keys as string

int main(){
        unordered_map<string,int> fre;
        fre["Alice"]=31;
        fre["Bob"]=21;
        cout<<fre["Alice"]<<endl;
        cout<<fre["Bob"]<<endl;
        return 0;
}

//This is unordered hash map taking keys as integer

// #include<iostream>
// using namespace std;
// #include<unordered_map>

// int main(){
//         unordered_map<int,string> fre;
//         fre[31]="Bob";
//         fre[21]="Alice";
//         cout<<fre[31]<<endl;
//         cout<<fre[21]<<endl;
//         return 0;
// 
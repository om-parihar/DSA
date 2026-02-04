#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("file.txt");
    fout<<"Hello Og"<<endl;
    fout<<"Hello king"<<endl;
    fout<<"Hello Kholi"<<endl;
    fout.close();

    ifstream fin;
    fin.open("file.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
}
#include<iostream>
using namespace std;

// A
// AB
// ABC
// ABCD
// ABCDE


void alphabetTriangle(){
    char c='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<c;
            c++;
        }
        c='A';
        cout<<endl;
    }
}

int main(){
    alphabetTriangle();
}
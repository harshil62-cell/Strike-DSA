#include<iostream>
using namespace std;

// A
// BB
// CCC
// DDDD
// EEEEE

void repeatedAlphabetTriangle(){
    char c='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<c;
        }
        c++;
        cout<<endl;
    }
}

int main(){
    repeatedAlphabetTriangle();
}
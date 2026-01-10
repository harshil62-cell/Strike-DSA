#include<iostream>
using namespace std;

//number triangle
// 1
// 12
// 123
// 1234
// 12345


void numberTriangle(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    numberTriangle();
}
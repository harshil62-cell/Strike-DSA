#include<iostream>
using namespace std;

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

void butterFlyPattern(){
    //upper half
    for(int i=1;i<=5;i++){
        //left side ke stars - for row i we print i stars
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        //middle spaces - for ith row there are 5*2-(i*2) spaces
        for(int j=1;j<=(10-(2*i));j++){
            cout<<' ';
        }
        //right side ke stars - for row i we print i stars
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    //lower half
    //we will go in reverse order
     for(int i=5;i>=1;i--){
        //left side ke stars - for row i we print i stars
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        //middle spaces - for ith row there are 5*2-(i*2) spaces
        for(int j=1;j<=(10-(2*i));j++){
            cout<<' ';
        }
        //right side ke stars - for row i we print i stars
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}

int main(){
    butterFlyPattern();
}
#include<iostream>
using namespace std;

//diamond
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

void diamond(){
    //pyramid
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<' ';
        }
        for(int k=1;k<=(2*i-1);k++){
            cout<<'*';
        }
        cout<<endl;
    }

    //inverted pyramid
    for(int i=5;i>=1;i--){
        for(int j=1;j<=(5-i);j++){
            cout<<' ';
        }
        for(int k=1;k<=(2*i-1);k++){
            cout<<'*';
        }
        cout<<endl;
    }
}

int main(){
    diamond();
}
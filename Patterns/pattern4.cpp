#include<iostream>
using namespace std;
//inverted right triangle
//     *
//    **
//   ***
//  ****
// *****


void invertedRightTriangle(){
    for(int i=1;i<=5;i++){
        //first we print spaces
        //in ith row there are 5-i spaces
        for(int j=1;j<=5-i;j++){
            cout<<' ';
        }
        //then *
        //in ith row there are i *'s
        for(int k=1;k<=i;k++){
            cout<<'*';
        }
        cout<<endl; 
    }
}

int main(){
    invertedRightTriangle();
}
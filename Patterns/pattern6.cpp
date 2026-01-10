#include<iostream>
using namespace std;

//inverted pyramid
// *********
//  *******
//   *****
//    ***
//     *

void invertedPyramid(){
    for(int i=5;i>=1;i--){
        //first spaces
        for(int j=1;j<=5-i;j++){
            cout<<' ';
        }
        //then stars
        for(int k=1;k<=(2*i-1);k++){
            cout<<'*';
        }
        cout<<endl;
    }
}

int main(){
    invertedPyramid();
}
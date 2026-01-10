#include<iostream>
using namespace std;

//pyramid pattern
//     *
//    ***
//   *****
//  *******
// *********

void pyramidPattern(){
    for(int i=1;i<=5;i++){
        //first 5-i spaces
        for(int j=1;j<=5-i;j++){
            cout<<' ';
        }
        //then 2*i-1 stars
        for(int k=1;k<=(2*i-1);k++){
            cout<<'*';
        }
        cout<<endl;
    }
}

int main(){
    pyramidPattern();

}
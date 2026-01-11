#include<iostream>
using namespace std;

//     1
//    121
//   12321
//  1234321
// 123454321

void palindromNumberTriangle(){
    for(int i=1;i<=5;i++){
        //print spaces - (5-i) where i is row number
        for(int j=1;j<=5-i;j++){
            cout<<' ';
        }
        //print increasing numbers
        //go upto i for ith row 1,2,...,i
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //print decreasing numbers
        //start from i-1 go upto 1 i-1,i-2,...,1
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    palindromNumberTriangle();
}
#include<iostream>
using namespace std;

//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *

void hollowDiamond(){
     //upper half
     for(int i=1;i<=5;i++){
        //spaces there are 5-i spaces first in ith row
        for(int j=1;j<=5-i;j++){
            cout<<' ';
        }
        //stars and spaces
        for(int j=1;j<=(2*i-1);j++){
            if(j==1 || j==(2*i-1)){
                //print start at first and last idx
                cout<<'*';
            }else{
                //otherwise there are spaces
                cout<<' ';
            }
        }
        cout<<endl;

     }

     //lower half
       for(int i=5;i>=1;i--){
        //spaces there are 5-i spaces first in ith row
        for(int j=1;j<=5-i;j++){
            cout<<' ';
        }
        //stars and spaces
        for(int j=1;j<=(2*i-1);j++){
            if(j==1 || j==(2*i-1)){
                //print start at first and last idx
                cout<<'*';
            }else{
                //otherwise there are spaces
                cout<<' ';
            }
        }
        cout<<endl;

     }
}

int main(){
    hollowDiamond();
}
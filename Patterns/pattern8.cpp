#include<iostream>
using namespace std;

//hollow square
// *****
// *   *
// *   *
// *   *
// *****

void hollowSquare(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            //if the row is 1st or 5th 
            if(i==1 || i==5){
                cout<<'*';
            }else{
                //print starts only at edge
                if(j==1 || j==5){
                    cout<<'*';
                }else{
                    //print spaces
                    cout<<' ';
                }
            }
        }
        cout<<endl;
    }
}

int main(){
    hollowSquare();
}
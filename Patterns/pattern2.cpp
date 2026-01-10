#include<iostream>
using namespace std;

//right triangle
// *
// **
// ***
// ****
// *****

void rightTrianglePattern(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}

int main(){
    rightTrianglePattern();
}
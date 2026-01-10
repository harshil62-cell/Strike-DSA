#include<iostream>
using namespace std;

// 1
// 23
// 456
// 78910

int main(){
    int count=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
            cout<<' ';
            count++;
        }
        cout<<endl;
    }
}
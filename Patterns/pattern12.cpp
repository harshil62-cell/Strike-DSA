#include<iostream>
using namespace std;

//binary triangle
// 1
// 01
// 101
// 0101
// 10101


int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                if(j%2==0){
                    cout<<1;
                }else{
                    cout<<0;
                }
            }else{
                if(j%2==0){
                    cout<<0;
                }else{
                    cout<<1;
                }
            }
        }
        cout<<endl;
    }

}
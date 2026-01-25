#include<iostream>
#include<vector>
using namespace std;

    int floorSqrt(int n) {
        // code here
        int start=0;
        int end=n;
        int result=1;
        if(n==1) return result;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid*mid==n){
                return mid;
            }else if(mid*mid>n){
                end=mid-1;
            }else{
                result=mid;
                start=mid+1;
            }
        }
        return result;
    }

int main(){
    int n=5;
    cout<<floorSqrt(n);
}
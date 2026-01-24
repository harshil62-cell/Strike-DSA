#include<iostream>
#include<vector>
using namespace std;

int searchInsertK(vector<int> &arr, int k) {
        int start=0;
        int end=arr.size()-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==k){
                return mid;
            }else if(arr[mid]<k){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        
        return start;
    }

int main(){
    vector<int> arr={1,3,5,6};
    int k=2;
    cout<<searchInsertK(arr,k);
}
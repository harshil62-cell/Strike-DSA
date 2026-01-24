#include<iostream>
#include<vector>
using namespace std;


int binarysearch(vector<int> &arr, int k) {
        int start=0;
        int end=arr.size()-1;
        int ans=-1;
        
        while(start<=end){
            //to avoid integer overflow
            int mid=start+(end-start)/2;
            
            if(arr[mid]==k){
                ans=mid;
                //try searching on left side for first occurence in case when target elements are repeated and we want first occurence
                end=mid-1;
            }else if(arr[mid]>k){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }

int main(){
    vector<int> arr={10,20,21,22,23,34,40};
    int ans=binarysearch(arr,21);
    cout<<ans;
}
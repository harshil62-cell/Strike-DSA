#include<iostream>
#include<vector>
using namespace std;


int findMin(vector<int>& arr) {
        int ans=arr[0];
        int start=0;
        int end=arr.size()-1;
        
        //handling edge case when array is rotated 0 times
        if(arr[start]<arr[end]){
            return ans;
        }
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>=arr[0]){
                //mid is in left portion then we need to move right
                start=mid+1;
            }else if(arr[mid]<arr[0]){
                //mid is in right portion so it can be ans or ans can be towards left
                ans=arr[mid];
                end=mid-1;
            }
        }
        return ans;
    }

int main(){
    vector<int> arr={5,6,7,8,1,2,3};
    cout<<findMin(arr);
}
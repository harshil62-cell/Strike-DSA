#include<iostream>
#include<vector>
using namespace std;

int peakElement(vector<int> &arr){
        int start=0;
        int end=arr.size()-1;
        
        if(arr.size()==1){
            return 0;
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            //mid is not the first or last element
            if(mid>0 && mid<arr.size()-1){
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                    //got the peak element
                    return mid;
                }else if(arr[mid-1]>arr[mid]){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }else if(mid==0){
                if(arr[0]>arr[1]){
                    return 0;
                }else{
                    return 1;
                }
            }else if(mid==arr.size()-1){
                if(arr[arr.size()-1]>arr[arr.size()-2]){
                    return arr.size()-1;
                }else{
                    return arr.size()-2;
                }
            }
        }
        return -1;
    }


int main(){
    vector<int> arr={1,2,3,8,7,6,5};
    cout<<peakElement(arr);
}
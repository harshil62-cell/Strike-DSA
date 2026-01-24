#include<iostream>
#include<vector>
using namespace std;

vector<int> find(vector<int>& arr, int x) {
        int start=0;
        int end=arr.size()-1;
        vector<int> result;
        int firstOcc=-1,secondOcc=-1;
        //find first occurence
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==x){
                firstOcc=mid;
                end=mid-1;
            }else if(arr[mid]<x){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        
        start=0;
        end=arr.size()-1;
        
        //find last occurence
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==x){
                secondOcc=mid;
                start=mid+1;
            }else if(arr[mid]<x){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        
        result.push_back(firstOcc);
        result.push_back(secondOcc);
        return result;
    }

int main(){
    vector<int> arr={1,2,3,3,3,4,5};
    vector<int> r=find(arr,3);
    cout<<r[0]<<r[1];
}
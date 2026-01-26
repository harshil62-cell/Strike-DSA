#include<iostream>
#include<vector>
using namespace std;



int search(vector<int>& arr, int key) {
        int start=0;
        int end=arr.size()-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==key){
                return mid;
            }else if(arr[mid]>=arr[0]){
                // if key lies in left portion
                if(key>=arr[start] && key<arr[mid]){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
                
            }else{
                //if key lies in right portion
                if(key>arr[mid] && key<=arr[end]){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }

int main(){
    vector<int> arr={5,6,7,8,9,2,3,4};
    cout<<search(arr,7);
}
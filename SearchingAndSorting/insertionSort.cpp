#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& arr) {
        int n=arr.size();
        for(int i=1;i<n;i++){
            for(int j=i;j>0;j--){
                if(arr[j]<arr[j-1]){
                    swap(arr[j],arr[j-1]);
                }else{
                    break;
                }
            }
        }
    }

int main(){
    vector<int> arr={1,2,3,4,5,6};
    vector<int> arr1={8,7,4,2,12,1,67};
    insertionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
#include<vector>
#include <climits>
using namespace std;

//Selection sort Algorithm
void SelectionSort(vector<int> &arr){
    int n=arr.size();
        int min=INT_MAX;
        
        for(int i=0;i<n;i++){
            int index=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[index]){
                    index=j;
                }
            }
            swap(arr[i],arr[index]);
        }
}


int main(){
    vector<int> arr={4,1,3,9,7};
    SelectionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;
#include<vector>

void bubbleSort(vector<int>& arr) {
        int n=arr.size();
        bool swapped;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped=true;
                }
            }
            if(!swapped){
                break;
            }
        }
    }

int main(){
    vector<int> arr={5,6,1,3};
    bubbleSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
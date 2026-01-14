#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // Check if array is sorted in ascending order
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i - 1] > arr[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};
    bool result = sol.isSorted(arr);
    cout << "Is Sorted: " << (result ? "Yes" : "No") << endl;
    
    vector<int> arr2 = {1, 3, 2, 4, 5};
    result = sol.isSorted(arr2);
    cout << "Is Sorted: " << (result ? "Yes" : "No") << endl;
    
    return 0;
}
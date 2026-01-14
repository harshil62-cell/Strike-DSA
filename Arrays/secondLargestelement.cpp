#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        
        // Edge case: array too small
        if (n < 2) return -1;
        
        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        
        // One pass approach
        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] < largest && arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }
        
        // Return -1 if second largest doesn't exist
        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    int result = sol.getSecondLargest(arr);
    cout << "Second Largest: " << result << endl;
    return 0;
}
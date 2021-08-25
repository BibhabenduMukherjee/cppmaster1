// Minimum swaps required to bring 
// less than or equal to k togetherall elements 

// Input:  arr[] = {2, 1, 5, 6, 3}, k = 3
// Output: 1


// Explanation: 
// To bring elements 2, 1, 3 together, swap 
// element '5' with '3' such that final array
// will be-
// arr[] = {2, 1, 3, 6, 5}

#include <iostream>
using namespace std;
  
// Utility function to find minimum swaps
// required to club all elements less than
// or equals to k together
int minSwap(int *arr, int n, int k) {
      
    // Find count of elements which are
    // less than equals to k
    int count = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] <= k)
            ++count;
      
    // Find unwanted elements in current
    // window of size 'count'
    int bad = 0;
    for (int i = 0; i < count; ++i)
        if (arr[i] > k)
            ++bad;
      
    // Initialize answer with 'bad' value of
    // current window
    int ans = bad;
    for (int i = 0, j = count; j < n; ++i, ++j) {
          
        // Decrement count of previous window
        if (arr[i] > k)
            --bad;
          
        // Increment count of current window
        if (arr[j] > k)
            ++bad;
          
        // Update ans if count of 'bad'
        // is less in current window
        ans = min(ans, bad);
    }

return ans;
}
  
// Driver code
int main() {
      
    int arr[] = {2, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << minSwap(arr, n, k) << "\n";
      
    int arr1[] = {2, 7, 9, 5, 8, 7, 4};
    n = sizeof(arr1) / sizeof(arr1[0]);
    k = 5;
    cout << minSwap(arr1, n, k);
    return 0;
}



// Given three numbers W, B, and O representing the quantities of white, 
// black, and other colors shirts respectively, the task is to find the 
// maximum number of boxes required such that each box 
// contains three shirts consisting of at least one white and black 
// shirt using the given quantity of shirts.




#include <bits/stdc++.h>
using namespace std;
  
// Function to find the maximum number
// of boxes such that each box contains
// three shirts comprising of at least
// one white and black shirt
void numberofBoxes(int W, int B, int O)
{
    // Stores the low and high pointers
    // for binary search
    int low = 0, high = min(W, B);
  
    // Store the required answer
    int ans = 0;
  
    // Loop while low <= high
    while (low <= high) {
  
        // Store the mid value
        int mid = low + (high - low) / 2;
  
        // Check if the mid number of
        // boxes can be used
        if (((W >= mid) and (B >= mid))
            and ((W - mid) + (B - mid) + O)
                    >= mid) {
  
            // Update answer and recur
            // for the right half
            ans = mid;
            low = mid + 1;
        }
  
        // Else, recur for the left half
        else
            high = mid - 1;
    }
  
    // Print the result
    cout << ans;
}
  
// Driver Code
int main()
{
    int W = 3, B = 3, O = 1;
    numberofBoxes(W, B, O);
    return 0;
}
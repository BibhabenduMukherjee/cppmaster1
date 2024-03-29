class Solution{
    public:
    // Function to find equilibrium point in the array.
    int equilibriumPoint(long long a[], int n) {
    
        //We store the sum of all array elements.
        long long sum = 0;
        for (int i = 0; i < n; i++) 
           sum += a[i];
    
        //sum2 is used to store prefix sum.
        // 
        long long sum2 = 0;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            
            //Leaving out the value of current element from suffix sum.
            sum = sum - a[i];
            
            //Checking if suffix and prefix sums are same.
            if (sum2 == sum) {
                //returning the index or equilibrium point.
                return (i + 1);
            }
            
            //Adding the value of current element to prefix sum.
            sum2 = sum2 + a[i];
        }
        return -1;
    }
};

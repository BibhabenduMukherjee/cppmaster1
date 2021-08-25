

// this time complexity is O(NLogN)

class Solution
{
    public:
    //binary search function finds the position of the first integer
    //in arr[] which is greater than or equal to 'value'.
    int binarySearch(int arr[], int l, int h, int value)
    {
        //if new value is greater than all array values,
        //then it is placed at the end.
        if(value>arr[h]) 
        return h+1;
       
        //binary search algorithm.
        while(h>l)
        {
            int middle = (h+l)/2;
            
            if(arr[middle] == value)
            return middle;
            
            if(arr[middle] > value)
            h = middle;
            
            else 
            l = middle + 1;
        }
        
        return h;
    }
    
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        //tail[i] holds the last value in a subsequence of length i+1.
        int tail[n];
        tail[0] = a[0];
        
         //the position of last filled index in tail[].
        int lastIndex = 0;
        
        for(int i=1; i<n; i++)
        {
            //getting the furthest possible index for a[i].
            int index = binarySearch( tail, 0, lastIndex, a[i] );
            
            tail[index] = a[i];
            //updating lastIndex.
            lastIndex = max( lastIndex, index );
        }
        //returning the result.
        return lastIndex + 1;
    }
};
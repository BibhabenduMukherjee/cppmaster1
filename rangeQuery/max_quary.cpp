#include <bits/stdc++.h>
using namespace std;

int MaxUtil(int* st, int ss, int se, int l,
            int r, int node)
{
    // If segment of this node is completely
    // part of given range, then return
    // the max of segment
    if (l <= ss && r >= se)     
        return st[node];
 
    // If segment of this node does not
    // belong to given range
    if (se < l || ss > r)
        return -1;
 
    // If segment of this node is partially
    // the part of given range
    int mid = getMid(ss, se);
     
    return max(MaxUtil(st, ss, mid, l, r,
                       2 * node + 1),
               MaxUtil(st, mid + 1, se, l,
                       r, 2 * node + 2));
}


void updateValue(int arr[], int* st, int ss, int se,
                 int index, int value, int node)
{
    if (index < ss || index > se)
    {
        cout << "Invalid Input" << endl;
        return;
    }
     
    if (ss == se)
    {  
        // update value in array and in segment tree
        arr[index] = value;
        st[node] = value;
    }
    else {
            int mid = getMid(ss, se);
             
            if (index >= ss && index <= mid)
                updateValue(arr, st,
                            ss, mid, index,
                            value, 2 * node + 1);
            else
                updateValue(arr,
                            st, mid + 1, se,
                            index,
                            value, 2 * node + 2);
             
            st[node] = max(st[2 * node + 1],
                       st[2 * node + 2]);
    }
    return;
}


int getMax(int* st, int n, int l, int r)
{
    // Check for erroneous input values
    if (l < 0 || r > n - 1 || l > r)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return MaxUtil(st, 0, n - 1, l, r, 0);
}

int buildMaxSegT_utill(int a[] , int low ,int high , int *st , int si)
{
	if(low==high)
	{
		st[si] = a[low];
		return a[low];
	}

	int mid = (low+high)/2;

	st[si] = max(buildMaxSegT_utill(a,low , mid , st,si*2+1) ,
	 buildMaxSegT_utill(a,mid+1 ,high , st , 2*si+2));

	return st[si];
}

int* buildMaxSegT(int a[], int n){

   int x = (int)(ceil(log2(n)));

   int max_size = 2 * (int)pow(2,x) -1;

   int* st = new int[max_size];

   buildMaxSegT_utill(a , 0 ,n-1 , st , 0);

   return st;


}

int main(){

   int a[] = {1,2,3,4,7,6};
   int n = sizeof(a)/sizeof(a[0]);

   int st = buildMaxSegT(a , n);



   cout << "Max of values in given range = "
         << getMax(st, n, 1, 3) << endl;

	return 0;
}
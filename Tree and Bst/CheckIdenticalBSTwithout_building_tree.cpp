// 1 . given two array a[] and b[]
// 2 . your task is check both tree are same or not

#include <bits/stdc++.h>
using namespace  std;





bool isSameBST_utill(itn a[] , int b[] ,int n, int i1 , int i2 , int min , int max){
	int i , j;

	for(int j = i1; j<n; j++){
		if(arr[j]> min and arr[j]<max)
			break;
	}


	for(int k = i1; k<n; k++){
		if(arr[k]> min and arr[k]<max)
			break;
	}


	if(j==n and k ==n)
		return true;

	if(((j==n)^(k==n)) || a[j]!=b[k])
		return false;


	return isSameBST_utill(a,b, n,j+1,k+1 , min , a[j]) and isSameBST_utill(a,b,n,j+1,k+1,a[j],max); 
}


bool isSameBST(int a[] , int b[], int n){
	return isSameBST_utill(a , b , n, 0 , 0 , INT_MIN, INT_MAX );
}




// The idea is to check of if next greater elements are same
// in both array. some property are recursively checked for
// left and right subtree
// [good to go]



int main()
{
    int a[] = {8, 3, 6, 1, 4, 7, 10, 14, 13};
    int b[] = {8, 10, 14, 3, 6, 4, 1, 7, 13};
    int n=sizeof(a)/sizeof(a[0]);
    if(isSameBST(a, b, n))
    {
        cout << "BSTs are same";
    }
    else
    {
        cout << "BSTs not same";
    }
    return 0;
}
 
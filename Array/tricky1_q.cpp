

// Given an array arr[], 
// find the maximum j – i such that arr[j] > arr[i]


#include <bits/stdc++.h>
using namespace std;

void f(int a[] , int n){
	
	
	int ans = -1;
	int idx = 0;
	for(int i = n-1 ; i>=0 ; i--){
		int dif = i - idx;
		if(i>idx and (a[i]>a[idx])){
		  ans = max(ans ,dif );
		  	idx++;
			}
		
		
			
		}
	cout << ans;
}

int main(){
	
	int a[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
	int n = sizeof(a)/sizeof(a[0]);
	
	f(a ,n);
	return 0;
	}



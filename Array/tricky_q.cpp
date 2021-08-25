#include <bits/stdc++.h>
using namespace std;


void f(int a[] , int n){
	
	int rightmax = a[n-1];
	int ans = -1;
	for(int i = n-2; i>=0 ; i--){
	
	if(a[i] > rightmax)
	{
		rightmax = a[i];
	}else{
		int dif = rightmax-a[i];
		if(dif > ans){
			ans = dif;
			}
		}
	
	
}
 cout << "Element is ::" << ans;
	}

int main(){
	
	int a[] = {1,2,4,6,7,8,9};
	int n = sizeof(a)/sizeof(a[0]);
	
	f(a , n);
	
	return 0;
	}

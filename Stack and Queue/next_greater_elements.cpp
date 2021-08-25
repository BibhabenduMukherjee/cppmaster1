// given a array 

#include <bits/stdc++.h>
using namespace std;

void next_greater(int arr[] , int n){
	
	stack<int> s;
    int a[n];
    a[n-1] = -1;
    s.push(arr[n-1]);
    int j = sizeof(a)/sizeof(a[0]);

	for (int i = n-2; i>=0; --i)
	{

             // pop print push

		while(!s.empty() and s.top() <= arr[i]){
			s.pop();
		}
		if(s.size()==0){
     a[i] = -1;
		}else{

		a[i] = s.top();
	}
	s.push(arr[i]);
	}

	for(int i= 0; i<j; i++){
		cout << a[i] << " " ;
	}
}

int main(){

  int arr[] = {12,4,15,34,23,45,14,17,21};
  int n = sizeof(arr)/sizeof(arr[0]);

  next_greater(arr , n);
	return 0;
}






// given a array just like that a[] = {0,2,2,2,0,6,6,0,0,8};
// '0' is invalid number if current and next number both are valid (0 exclude) then double current and replace next 
// to '0' and finally rearrange array (move all the zero to one side)
// GOOD TO GO     (70% EASSY)


#include <bits/stdc++.h>
using namespace std;


void rearrange(int a[] ,  int n){

	int count = 0; // number of non-zero elements 

    
    for(int i =0 ; i<n; i++){
    	if(a[i]!=0){
    		a[count++] = a[i];

    	}
    }

  while(count < n){
  	a[count++] = 0;
  }
}

void f(int a[] , int n){
	for(int i  =0; i<n; i++)
	{
		if(a[i]!=0 and a[i+1]!=0){
			arr[i] = 2*arr[i];
			arr[i+1] = 0;
		}
	}

	rearrange(a, n);
}

int main(){

    int a[] = {0,2,2,2,0,6,6,0,0,8};
    int n = sizeof(a)/sizeof(a[0]);

    f(a,n);

	return 0;
}











int j = 0 ; int i=-1;
while(j<n){
  if(a[j]%2==0){
  	i++;
  	swap();
  }
  j++;

}


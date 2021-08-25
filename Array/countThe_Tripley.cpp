#include <bits/stdc++.h>
using namespace std;

int CountTriplets(int arr[] , int n){
   sort(arr, arr+n)
   int ans = 0 ;

   for (int i = n-1; i>=0; ++i)
   {
   	int j =0 ; 

   	int k = i-1;

   	while(k>j){
   		if(arr[i] == arr[j] + arr[k]) {ans++; j++; k--;}
   		else if(arr[i] > arr[j]+ arr[k] ) j++;
   		else{
   			k++;
   		}
   	}
   }
   return ans;
}


int main(){


  int arr[] = {1,5,3,2};
  int n = 4;

  cout << CountTriplets(arr , n);

	return 0;

}
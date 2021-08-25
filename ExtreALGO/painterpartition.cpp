#include <bits/stdc++.h>
using namespace std;

int makePartion(int arr[]  , int n  , int min){
int sum = 0 ;   int p = 1;

for(int i =0 ; i<n ; i++){
	sum+=arr[i];
	if(sum > min){
		sum = arr[i];
		p++;
	}
	return p;
}

}
int partition(int arr[]  , int n , int k){

int low = 0 ; int high =0;

for (int i = 0; i < n; ++i)
{
	low= max(low , arr[i]);
	high = high + arr[i];
}

while(low <= high){
	int mid = (mid+high)/2;
	int partition = makePartion(arr , n  , mid);
	if(partition <=m) high = mid;
	else {low = mid + 1;}
}
return low;
}



int main(){

 int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]); // number of boadrs to paint
    int k = 3; // number of painters
    cout << partition(arr, n, k) << endl;
    return 0;
	return 0;
}
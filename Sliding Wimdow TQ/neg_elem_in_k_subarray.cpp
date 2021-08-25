
#include <bits/stdc++.h>
using namespace std;

// int slove(int a[] , int n , int k)
// {
// 	int c = 0;
//     int i=0;
//     int j = 0;
//     int count = 0;

// 	while(j<n)
// 	{
// 		  if (arr[j] < 0) {
//                 count++;
//             }
//             if (j - i + 1 == k) {
//                 cout << " " << count;
  
              
//                 if (arr[i] < 0) {
//                     count--;
//                 }
//                 i++;
//             }

//             j++;
// 	}

// }


void slove(int a[] , int n , int k){
	int c =0;
	for (int i = 0; i < k; ++i)
	{
	   if(a[i] < 0)
	   {
	   	c++;
	   }
	   if(i==k-1)
	   {
   cout << " " << c;
	   }
	}

for(int i = k ; i<n; i++){

	if(a[i-k] <0){
		c--;
	}
	if(a[i] < 0 ){
		c++;
	}
	cout<<" "<<c;
}

}


int main(){
 
  int a[] = {-1,2,-2,3,5,-7,-5,-6,-3};
  int n = sizeof(a)/sizeof(a[0]);
  int k = 3;

   slove(a,n,k);
	return 0;
}





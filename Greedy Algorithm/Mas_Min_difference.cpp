
// you have given a A , of size n. You have 
// to remove exactly n/2 element from array A and 
// add it to another array B 
// Find the maximum and minimum values of difference
// between two array .  

#include <bits/stdc++.h>
using namespace std;
int main(){

  int n;
   cin >>n;
   vector<int> a(n);

   for(auto &i : a){
   	cin >> i;
   }

   long long mx =0 , mn = 0;

   sort(a.begin() , a.end());


   for(int i=0; i<n/2 ; i++){
   	mx += (a[i+n/2] - a[i]) ;

    mn += ( a[2*i+1] - a[2*i] ) ;
   	 // max diff comes when one is big another is small
   }

   cout << mx << " " << mn;

	return 0;
}
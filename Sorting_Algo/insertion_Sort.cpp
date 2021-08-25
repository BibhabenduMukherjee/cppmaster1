#include <bits/stdc++.h>
using namespace std;


int main(){

   int n; cin >> n ;
   int a[n];


   for (int i = 0; i < n; ++i)
   {
   	   cin >> a[i];
   }

   cout << "Before the Sorting The looks like: " <<endl;

   for (int i = 0; i < n; ++i)
   {
   	cout << a[i] << " ";
   } cout << endl;
   

   
   for (int i = 1; i < n; ++i)
   {    
   	    int current = a[i];
   	    int j = i-1;

   	    while(a[j] > current  && j>=0){
   	    	a[j+1] = a[j];
   	    	j--;
   	    }
   	    a[j+1] = current;

   }

   cout << "After the array loos like" << endl;

    for (int i = 0; i < n; ++i)
   {
   	cout << a[i] << " ";
   } cout << endl;
   

	return 0;
}
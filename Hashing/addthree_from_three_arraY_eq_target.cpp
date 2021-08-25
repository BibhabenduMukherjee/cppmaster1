#include <iostream>
#include<set>
using namespace std;
 

// find three elements such that a+b+c = sum 
// sum is given in the function 
// a ,b ,c is the three different elements from 
// three different array a1 , b1 , c1 

// HASHING YOU CAN SLOVE THIS PROBLEM EASILY 


bool slove(int a[] , int b[] , int c[] , int n1 , int n2 , int n3 , int sum)
{
set<int>s;

   for (int i = 0; i < n1; ++i)
   {
   	  s.insert(a[i]);
   }

   for (int i = 0; i < n2; ++i)
   {
   	for (int j = 0; j < n3; ++j)
   	{
   		if(s.find(sum - b[i] - c[j]) != s.end()) return true;
   	}


   }
return false;
}


int main(){

   int a[] = { 1 , 2 , 3 , 4 , 5 } ; 
   int b[] = { 2 , 3 , 6 , 1 , 2};
   int c[] = {3 , 2 , 4 , 5 , 6};

   int n2 = sizeof(b)/sizeof(b[0]);
   int n3 = sizeof(c)/sizeof(c[0]);

   int n1 = sizeof(a)/sizeof(a[0]);

   int sum = 9;
   if(slove(a,b,c,n1,n2,n3,sum)){
   	cout << "YES\n";
   }else{
   	cout << "NO\n";
   }

   
	return 0;
}
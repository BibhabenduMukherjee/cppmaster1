#include <bits/stdc++.h>
using namespace std;


void slove(int a[] , int id , int n)
{

   if(id == n){
   	return ;
   }
   

   cout << a[id] <<"\n";
   slove(a , id+1 , n);
}

int main(){

   
   int a[] = {10,20,30,40,50};
   int n = sizeof(a)/sizeof(a[0]);
   int id = 0;

   slove(a , id , n);

	return 0;
}
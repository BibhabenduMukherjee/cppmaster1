#include <bits/stdc++.h>
using namespace std;


void f(int a[] , int n , int t){
   

   int l = 0; int h=n-1;
   bool FLAG = false;

   while(h>l)
   {
    

     if(a[l] + a[h] == t)
     {
     	cout << "[ " << l <<"," <<h <<" ]";
     	FLAG = true;
     	break;
     }
     if(a[l] + a[h] >t )
     {
       h--;
     }else{
     	l++;
     }


   }

   if(FLAG == false){
   	cout <<" NOT FOUND";
   }


}

int main(){

   int a[] ={1,2,3,4,5,6,7,45,78,120,234,500};
   int n = sizeof(a)/sizeof(a[0]);
    int t= 508;
    f(a , n , t);
	return 0;
}
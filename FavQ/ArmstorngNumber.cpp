#include <bits/stdc++.h>
using namespace std;

int isA(int n ){
	int sum =0; int t;
	int remaider;
    int digit = 0;
	t = n;
   while(t!=0){
   	digit++;
   	t = t/10;
   }
   t= n;
   while(t!=0){
   	remaider = t%10;
   	sum = sum + pow(remaider , digit);
   	t = t/10;
   }

   if(n==sum){
   	return 1;
   }
   return 0;

}


int main(){

  cout << "Enter Any Number You want\n";

  int n; cin>>n;

  if(isA(n)){
  	cout << n <<" " <<" is a armstorng number";
  }else cout << n <<" " <<"is not a armstorng number";

	return 0;
}
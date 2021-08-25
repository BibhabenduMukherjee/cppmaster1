#include <bits/stdc++.h> 
using namespace std;


int main(){
 

  int sum = 0;
  set<int> mysum;
 for (int i = 0; i < n; ++i)
 {
     sum +=arr[i];

     if(sum == 0  || mysum.find(sum) != mysum.end() ) return true; 	

     mysum.insert(sum)
 }

	return 0;
}       

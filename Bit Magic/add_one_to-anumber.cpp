#include <bits/stdc++.h>
using namespace std;

int add_one_to_a_numbe(int x){
	return (-(~x));
}

int main(){

  
// #ifndef ONLINE_JUDGE
// 	freopen("/downloads/MUSTDOCODINGQ/Bit Magic/input.txt"  , "r" , "stdin");
// 	freopen("/downloads/MUSTDOCODINGQ/Bit Magic/output.txt" , "w" , "stdout");
// #endif


   int n;
   cin >> n;
   add_one_to_a_numbe(n);
	return 0  ;
}
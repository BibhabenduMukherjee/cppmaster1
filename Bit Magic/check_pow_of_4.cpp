#include <bits/stdc++.h>
using namespace std;


// any number is a power of 4 if
// the floor value of (logn/log4) and the ceil
// value of (logn/log4) is equal

///////------0R------///////////


// a) There is only one bit set in the
//  binary representation of n (or n is a power of 2) 
// b) The count of zero bits before the (only) set 
// bit is even.

float logn(int n , int r){
	return log(n)/log(r);
}

bool ispow_four(int n){

	if(n==0) return false;

	return floor(logn(n,4))==ceil(logn(n,4));
}

int main(){

 int n = 16;

  if(ispow_four(n)){
  	cout << n << " is a power of four";
  }else{
  	cout << n << "is not a power of four";
  }
	return 0;
}

/////// APPROACH 2 //////////////


// Another solution is to keep dividing the number by 4, i.e, 
// do n = n/4 iteratively. 
// In any iteration, if n%4 becomes non-zero and n is not 1 then n is not 
// a power of 4, 
// otherwise, n is a power of 4

class GFG
{
     
/* Function to check if x is power of 4*/
public : bool isPowerOfFour(int n)
{
    if(n == 0)
        return 0;
    while(n != 1)
    {
        if(n % 4 != 0)
            return 0;
        n = n / 4;
    }
    return 1;
}
};
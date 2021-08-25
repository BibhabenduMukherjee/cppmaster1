#include <bits/stdc++.h>
using namespace std;


void reverse(int n){
int FLAG = false;
int rev = 0 ; 
int j =0;
	for (int i = 31; i>=0; --i)
	{  
        int mask = (1<<i);

	

	if(FLAG)
	{
	  if((n&mask)!=0)
	  {
	  	// cout << 1 << " ";
	  	int smask = (1<<j);
		  rev|= smask;
	  }else{
	  	// cout << 0 <<" ";
	  }
	  j++;
	}else{
		if((n&mask)!=0)
		{ 
			FLAG =true;
		  // cout << 1 <<" ";

		 int smask = (1<<j);
		  rev|= smask;
		  j++;
		}else{
        
		}
	}
}    cout << endl;
     cout << rev;
	}
	

int main(){
  
   int n = 11;

   reverse(n);
   
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int RSB_Pos(int n){
	
    
    if(n==0){
    	return 0 ;
    }

    else{

    	int pos = 1;
    		for (int i = 0; i < 32; ++i)
	{
       
       int mask = (1<<i);
	 
	  if(!(n&(1 << mask))){
	  	pos++;
	  }else break;
	}
return pos;
    }
    

	
}

int main(){

  int n = 19;
  cout << RSB_Pos(n);
	return 0;
}
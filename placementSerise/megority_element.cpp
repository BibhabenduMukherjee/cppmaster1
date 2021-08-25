// given a array of size n, the majority
// element is the element that appears
// more tahn floor of(n/2)

// 2,2,1,1,1,2,2--> is 2
// floor(7/2) == 3 // here 2 appear more 
// then 3

// O(n^2)

// use hashmap O(nlogn)

// moore voting algo

// 7,7,5,7,5


 
#include <bits/stdc++.h>
using namespace std;


int slove(vector<int> &v)
{
int c = 0;
int candidate =0 ;

	for(int i : v)
	{
      if(c==0)
      {
       candidate = i;
      }

      if(candidate == i)
      {
        c+=1;
      }
   else{c-=1;}
	}
	return candidate;
}

int main(){

    vector<int> v={3,3,1};

    cout<< slove(v);


	return 0;
}
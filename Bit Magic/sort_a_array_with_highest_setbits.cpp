
// binary represent of 2 -- 10  (set bit is 1)
//                     3 -- 11  (set bit is 2)      output array is  15 , 3 , 32 , 2
//                   15 -- 1111 (set bit is 4)
//                  32 -- 10000 (set bit is 1) 
 
#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
  return __builtin_popcount(a) >__builtin_popcount(b);
}

void sort_f(int a[] , int n){
	sort(a , a+n , comp);
}

int main(){

    int a[] = {2,3,32 , 15};

    cout << "Initial array::- >> " <<endl;
    for (int i = 0; i < 4; ++i)
    {
    	cout << a[i] << " ";

    }cout << endl;

    sort_f(a , 4);
	return 0;
}
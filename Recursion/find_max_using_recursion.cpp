#include <bits/stdc++.h>
using namespace std;



int slove(int a[] , int id , int n)
{

    if(id == n-1)
    {
      return a[id];
    }
	int m = max(a[id] , slove(a , id+1  , n));

	return m;
}

int main(){


    int a[] = {322,2,445456,34,9};

    int id = 0 ;

    int n =sizeof(a)/sizeof(a[0]);

    cout << slove(a , id , n);

	return 0 ;
}
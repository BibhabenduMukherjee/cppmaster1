#include <bits/stdc++.h>
using namespace std;


// resurcive code for this solution

// int f()
// {
// 	if(n < 1)
// 	{
//     return n;
// 	}

// 	if(n == 2)
// 	{
// 		return 2;

// 	}


// 	return (4*f(n-2)  +  f(n-1));
// }



int slove(int limit)
{

	if(limit < 2) return 0;
  long long int e1 = 0;
  long long int e2 = 2;

  long long int s = e1 + e2 ;

 while(e2 <= limit)
 {
 	long long int e3 = 4*e2 + e1;

 	if(e3 > limit)
 	{
    break;
 	}


 	e1 = e2;

 	e2 = e3;

 	sum+= e2;
 }

 return sum;


}

int main()
{
	int  l = 400;

	cout << slove(l);
}
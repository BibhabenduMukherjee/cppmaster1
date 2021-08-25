#include <bits/stdc++.h>
using namespace std;


// int slove(int x , int n)
// {
// 	if(n==0) return 1;

// 	int from =  slove(x , n-1);

// 	return (x*from);
// }


int slove_(int x , int n) 
{
int ans = slove_(x , n/2);
int real_ans = ans*ans;

if(n%2==1)
{
	real_ans = x* real_ans;
}
return real_ans ; 


}

int main()
{
	int x,n;
	cin >> x >> n;

   cout << 	slove_(x,n);
}

// efficiant 


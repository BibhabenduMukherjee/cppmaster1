#include <bits/stdc++.h>
using namespace std;


void slove()
{
	int n;
	cin >> n;
	int a[n];
	long long sum = 0;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
     
    for (int i = 0; i < n; ++i)
    {
    	sum+=a[i];
    }

	if((sum/n)==1)
	{
    cout << 0 <<"\n";
	}



}


int main(){

   int t;
   cin>>t;
   while(t--)
   {
    slove();
   }

	return 0;
}
#include <bits/stdc++.h>
using namespace std;


void slove()
{
	int n;
   cin >> n;
   int maxi = INT_MIN;
   int mini = INT_MAX;
   int  sum = 0;
   for(int i = 1 ; i <= n; i++)
   {
     int x ;
     cin >> x;
     maxi = max(maxi , x );

     sum += x;

     mini  = min(mini , x);
   }

   sum = sum - maxi + mini;
   sum = sum/mini;

   cout << sum  <<"\n";

}

int main()
{

   int t;
   cin >> t;

   while(t--)
   {
   	slove();
   }

	return 0;
}
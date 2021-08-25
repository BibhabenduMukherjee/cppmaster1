#include <bits/stdc++.h>
using namespace std;



void  slove()
{
	int n , a;
	cin >> n;
	int f = 0  , s = 0;

   while(n--)
   {
   	cin >> a;
   	if(a==1)
   	{
   		f++;
   	}
   	else{
   		s++;
   	}
   }

   if(f%2!=0)
   {
   	cout << "NO\n";
   }else if(f == 0 and s%2 != 0)
   {
    cout << "NO\n";

}else {
	cout << "YES\n";
}

}

int main(){


	int t;
	cin>>t;
	while(t--)
	{
		slove();
	}
}
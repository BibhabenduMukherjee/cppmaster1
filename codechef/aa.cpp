#include <bits/stdc++.h>
using namespace std;

void slove()
{

int l , h;
cin >> l >> h;

string s;
cin >>s;
int count_z =0 ;

int ch = 0;

int required_sleep = h;
int free_time_sleep = 0;
bool FLAG = false;
int n = s.size();

for(int i =0 ; i<n ;i++)
{
	if(s[i] == '0')
	{
		free_time_sleep++;

		ch = 1;

		if(free_time_sleep >= required_sleep);
		{
          FLAG = true;
          cout <<"YES\n";
          break;
		}

		continue;
	}
	else if(s[i] == '1' and ch = 1)
	{
		
		if(free_time_sleep < required_sleep)
		{
         if(2*(required_sleep-free_time_sleep) < required_sleep)
         {
         	required_sleep = 2*(required_sleep - free_time_sleep);
         	free_time_sleep = 0;
         	continue;
         }
         else{
         	cout <<"YES" <<endl;
         	FLAG = 1;
         	break;
         }
		}
	}


}

if(FLAG == 0)
{
	cout <<"NO" <<endl;
}


}







int main()
{
	int t;
	cin >>t;

	while(t--)
	{
		slove();
	}
}
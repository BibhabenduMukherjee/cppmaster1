// gray code is a change of bits in only one
// gray code of 1 bit is 0 and 1

#include<bits/stdc++.h>
using namespace std;

vector<vector<char>> slove(int n)
{
   
   if(n==1)
   {
   	vector<vector<char>> bres;
   	bres[0].push_back('0');
   	bres[0].push_back('1');

   	return bres;
   }
	vector<vector<char>> rres = slove(n-1);
	vector<vector<char>> mres;

	for (int i = 0; i < rres.size(); ++i)
	{
		for (int j = 0; j < rres[i].size(); ++j)
		{
			char rstr = rres[i][j];
			mres[i].push_back('0'+rstr);
		}
	}

	for (int i = 0; i < rres.size(); ++i)
	{
		for (int j =rres[i].size()-1; j>=0 ; --j)
		{
			char rstr = rres[i][j];
			mres[i].push_back('1'+rstr);
		}
		
	}
	return mres;
}

int main(){

    int n;
    cin >> n;

    vector<vector<char>> ans = slove(n);
     for (int i = 0; i < ans.size(); ++i)
     {
     	for(int j = 0 ; j<ans[i].size(); j++)
     	{
     		cout << ans[i][j]<<" ";
     	}cout << endl;
     }

	return 0;
}
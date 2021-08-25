#include <bits/stdc++.h>
using namespace std;


string slove(string s)
{   

	
    map<char , int> mp;
    string res="";
	for(char ch : s)
	{
      if(mp.find(ch) == mp.end())
      {
         mp[ch]= rand();
      }

      res = res + to_string(mp[ch]);
	}

	return res;
}

int main(){

  string s = "bhdbd";
   cout << slove(s);
	return 0;
}
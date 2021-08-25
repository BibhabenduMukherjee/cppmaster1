#include <bits/stdc++.h>
using namespace std;

int binarySearchRow(vector<vector<int>> &a  , int terget   )
{
   int  l =0 ;
  int n = a.size();
   int h = n-1;
while(l <= h){
	 int m = (l+m)/2;

    if(a[m][0] <= terget <= a[m][n-1])
    {
    	return m;
    }

    else if(a[m][0]  < terget)
    {
      l = m+1;
    }else
    {
    	h = m-1;
    }
}
   

    return -1;
}


bool f(vector<vector<int>> &a , int terget , int r )
{
	int l = 0;
	
   int n = a.size();
	int h = n-1;
	while(l <= h )
	{
		int m = (l + h)/2;

		if(a[r][m] == terget)
		{
			return true;
		}else if(a[r][m] < terget)
		{
          l = m+1;
		}else{

			h = m-1;
		}
	}

return false;
}

bool slove(vector<vector<int>> &a , int terget )
{
  int r = binarySearchRow(a , terget);

  if(r == -1)
  {
  	return false;
  }

  return f(a , terget , r );
}


int main()
{

    vector<vector<int>> a={
    	{1,2,3},
    	{5,6,7},
    	{8,9,10}
    };

  if(slove(a , 6 )){
  	cout << "YES";
  }else{
  	cout << "NO";
  }

	return 0;
}
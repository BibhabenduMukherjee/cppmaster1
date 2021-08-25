#include <bits/stdc++.h>
using namespace std;


void printMatrix(vector<vector<int>> &a , int terget)
{
	int r = 0;
	int c = a[0].size()-1;
     bool f = false;

while(r < a.size()  and c >= 0)
{
	if(a[r][c] == terget)
	{
		cout << "Item found at" << "[" << r <<" " << c << " ]";
		f= true;
		break;
	}else if(a[r][c] > terget )
	{
      c--;
	}else
	{
		r++;
	}
	

}
     if(f == false){
	cout << "Item not found";
}


	}

int main(){

   int n , m , t;
   cin >> n >> m >> t;
  vector<vector<int>> a(n , vector<int> (m));
  
  for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
           cin >>  a[i][j] ;
        }
    }


   printMatrix(a , t);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

void ramdomG()
{
	int max = 200;
	int min = 1;
	int new_i;

	for(int i = 0 ; i <=10 ; i++)
	{
   new_i = (rand() % (max + 1 - min) + min);
   cout<<new_i << "\n";
	}
}


int main()
{

     ramdomG();
	return 0 ; 
}
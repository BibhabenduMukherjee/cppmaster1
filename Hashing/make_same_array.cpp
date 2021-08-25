#include<iostream>
#include <map>
using namespace std;


int slove(int a[] , int n)
{
	map<int , int> m;

	for (int i = 0; i < n; ++i)
	{
		m[a[i]]++;

	}

	int max = -2;
    for (auto i : m)
    {
    	if(i.second > max)
    	{
    		max = i.second;
    	}
    }

    return (n-max);
}

int main(){

    
    int a[] = {4,4,3,2,4,4,4};
    int n = sizeof(a)/sizeof(a[0]);
    cout <<  slove(a , n);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;


void firstElement(int arr[] , int n, int k)
{
    map<int , int > m;

    for (int i = 0; i < n; ++i)
    {
        m[arr[i]]++;
    }

    for (int i = 0; i < n; ++i)
    {
    	if(m[arr[i]] == k) {cout << arr[i] <<"\n";break;}
    }
// also we can use count_map[arr[i]] == k

}



int main(){

   
    int arr[] = {1, 7, 4, 3, 4, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    firstElement(arr, n, k);
    return 0;

	return  0;
}
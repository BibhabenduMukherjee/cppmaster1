// using minHeap 
// Time Complexity O(N + KlogN)

#include <bits/stdc++.h>
using namespace std;


int main(){

  int t;
  cin>>t;

  while(t--){

    int n,k;
    cin>>n>>k;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];

    }

    priority_queue<int , vector<int> , greater<int>> p;

    for (int i = 0; i < n; ++i)
    {
       q.push(arr[i]);
    }
    int i =0; int ans;
    while(!q.empty())
    {
       if(i==k){
       	ans = q.top();
       	break;
       }
   
         i++;
    	q.pop();
    }

  }
  cout << ans <<"\n;

	return 0;
}
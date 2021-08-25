#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<long long int> v{
        34, 8, 10, 3, 2, 80, 30, 33, 1
    };
    int n = v.size();
    vector<long long int> maxFromEnd(n + 1, INT_MIN);
 
    // create an array maxfromEnd
    for (int i = v.size() - 1; i >= 0; i--) {
        maxFromEnd[i] = max(maxFromEnd[i + 1], v[i]);
    }

for(int i =0  ; i < n ; i++)
{
	cout << maxFromEnd[i] << " ";
}

return 0;

    }
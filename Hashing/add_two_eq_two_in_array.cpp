// Given an array of distinct integers, find if there are two 
// pairs (a, b) and (c, d) such 
// that a+b = c+d, and a, b, c and d are distinct elements.
//  If there are multiple answers, then print any of them.


bool  findPairs(int arr , int n)
{
  map<int , pair<int , int>> Hash;
  int s = 0;

  for (int i = 0; i < n; ++i)
  {
  	for (int j = 1; j < n; ++j)
  	{
  		int s+= a[i] + a[j];

  		if(Hash.find(s) == Hash.end())
  		{
  			Hash[s] = make_pair(i , j);
  		}else
  		{
  			pair <int , int> pp = Hash[s];
           cout << "(" << arr[pp.first] << ", " << arr[pp.second]
                     << ") and (" << arr[i] << ", " << arr[j] << ")n";
                return true;

  		}
  	}
  }

  cout << "No Pair Found";
  return false;
}


int main()
{
	 int arr[] = {3, 4, 7, 1, 2, 9, 8};
    int n  =  sizeof arr / sizeof arr[0];
    findPairs(arr, n);
    return 0;
}
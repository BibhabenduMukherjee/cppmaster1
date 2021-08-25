#include <bits/stdc++.h>

using namespace std;


void slove(int a[] ,int n){
	
	
	// put all the elements in the freq map
	
	map<int ,int> freq;
	
	for(int i=0; i<n; i++){                                    
		freq[a[i]]++;
		}
	
	pair<int ,int> x,y,z;
	
	x.first = y.first = z.first = INT_MIN;
	
	for(auto curr : freq)
	{
	
	
	if(curr.second > x.first)
	{
		
		z= y;
		y = x;
		
		x.first = curr.second;
		x.second = curr.first;
		
		}	
		
		  else if (curr.second > y.first) {
  
            // Modify values of third largest
            z = y;
  
            // Modify values of second largest
            y.first = curr.second;
            y.second = curr.first;
        }
  
		  else if (curr.second > z.first) {
  
            // Modify values of z Number
            z.first = curr.second;
            z.second = curr.first;
        }
		
	}
	  cout << "Three largest elements are "
         << x.second << " " << y.second
         << " " << z.second;
	}

int main(){
	
	int a[] = {3, 4, 2, 3, 16, 3, 15, 16, 15, 15, 16, 2, 3};
	int n = sizeof(a)/sizeof(a[0]);
	
	slove(a ,n);
	return 0;
	}

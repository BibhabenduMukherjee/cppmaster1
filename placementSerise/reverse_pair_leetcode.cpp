// given an array nums we call (i,j) an 
// important reverse pair if (i < j) and num[i] > 2*nums[j]

// you need to return the number of pair

//   GOOD TO GO


int merge()
{
	int c = 0;
	int j = mid+1; // j pointing right half

	for (int i = low; i <=mid; ++i)
	{
		while(j<=high and a[i] > 2* a[j])
		{
			j++;
		}

		c += (j-(mid+1));
	}
vector<int> temp;

int left = low; int right = mid+1;

while(left <= mid and right <= high){
	if(a[left] <= a[right])
	{
		temp.push_back(a[left++]);
	}else{
		temp.push_back(a[right++]);
	}


}


while(left <= mid)
{
	temp.push_back(a[left++]);
}

while(right <= high)
{
temp.push_back(a[right++]);
}
return cnt;

}

int  mergesort(int a[] , int low , int high)
{
	if(low>=high) return 0;

	int mid = (low+high)/2;

	int inv=mergesort(a,low,mid);
	inv+= mergesort(a , mid+1 , high);
	inv+= merge(a , low, mid ,high);

	return inv;
}

int reversepair(int a[] , int n){
	        
	     return mergesort(a , 0 ,n-1);
   
}


int main(){

    int a[] = {};

    int n = sizeof(a)/sizeof(a[0]);

    cout << reversepair(a,n);

	return 0;
}
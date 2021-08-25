// ncr == > n!/(r!)(n-r)!

// simple programe is to
// find the factorial of n and r and n-r



// programe for finding the factorial


int fact(int n){

	int res = 1;

	for(int i = 2 ; i<=n ;i++)
	{
		res*=i;
	}

	return res;
}

// 
// fuction for ncr calculating

int ncr(int n , int r)
{
	return(fact(n)/fact(r)*fact(n-r));
}


// efficient programe 

// ncr

// upper term is n . n -1 .... n-r+1
// lower term is r . r-1 .... 1


void effi_ncr(int n , int r)
{
   

   if(r>n-r) r = n-r;


	long long p = 1;
	long long k = 1;

   if(r!=0)
   {
   	while(r)
   	{
   		p*=n;
   		k*=r;

   		// gcd find p,k 
   		// avioding overflow 


   		long long m =__gcd(p ,k);

   		p/=m;
   		k/=m;

   		n--;
   		r--;
   	}
   }else{
   	p = 1;
   }
cout << p;
}
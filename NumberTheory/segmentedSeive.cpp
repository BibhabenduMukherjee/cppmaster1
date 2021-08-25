#include <bits/stdc++.h>
using namespace std;


// const int N = 1000000;

// bool seive[N+1];

// void createSeive(){

// for (int i = 2; i <=N; ++i)
// {
// 	seive[i] = true;
// }
// for(int i = 2 ; i*i<=N ; i++)
// {
// 	if(seive[i] == true)
// 	{
//         for(int j = i*i ;  j<=N ;j+=i)
//         {
//         	seive[j] = false;
//         }
// 	}
// }

// }


// function for generate all prims in range sqrt(r)

void generatePrime(int N , vector<int> &primes )
{
	bool mark[N+1];

	memset(mark , true , sizeof(mark));



	for(int i = 2;  i<=N ; i++)
	{
		if(mark[i] == true)
		{
			primes.push_back(i);

			for(int j = i*i ; j<=N ; j+=i)
			{
				mark[j] = false;
			}
		}
	}
	
}

void PrimeInRange(int l , int r)
{

int limit = floor(sqrt(r)) + 1;

vector<int> primes;  

generatePrime(limit , primes);
// create a dummy array of size r-l+1;
// mark all place as 1

int n = r - l + 1;

int dummy[n+1];

memset(dummy  , false , sizeof(dummy));

  for(auto pr : primes)
  {
     int firstMulti = (l/pr) * pr;

     if(firstMulti < l)
     {
     	firstMulti+= pr;
     }

     for(int j = max(firstMulti  , pr*pr);  j<=r ; j+=pr)
     {
     	dummy[j-l] = true;
     }
  }
// get all the primes

  for(int i = l ; i <= r ; i++)
  {
  	if(!dummy[i-l])
  	{
  		cout << i <<"  ";
  	}
  }


}



int main()
{
   
// create a seive for all prime in 10^6 range



   int l = 110  ;
   int r = 130;
   
// step 1 generate all the primes for sqrt(r);
 
   PrimeInRange(l , r);
	return 0;
}
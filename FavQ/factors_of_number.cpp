#include <bits/stdc++.h>
using namespace std;


//do it
void showAllFactorsOfANUmber(int n){

   if(n==1){
   	cout << "1";
   }
   
	while(n%2==0)
	{
		cout << "2" <<" " ;
		n = n/2;
	}

	for(int i  =3 ; i*i <= n ; i++){

   while(n%i==0)
   {
   	cout << i <<" " <<n/i <<" ";
   	n = n/i;
   }

	}
}


int main(int argc, char const *argv[])
{
	
    int  n; cin >> n;

    showAllFactorsOfANUmber(n);

	return 0;
}

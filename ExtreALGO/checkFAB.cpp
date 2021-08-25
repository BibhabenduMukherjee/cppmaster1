#include <bits/stdc++.h>
using namespace std;
bool isPerfectSQ(int x){

	int s = sqrt(x);
	return (s*s == x);
}

bool CheckFAB(int n){

	return isPerfectSQ(5*n*n+4) || isPerfectSQ(5*n*n -4);
}

int main(){
     
     int n = 8;
    CheckFAB(n) ? cout << "YES" : cout << "NO";
    
	return 0;
}
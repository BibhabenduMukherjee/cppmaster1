// 1 2 3 4 5 6 7 8 9 
// alternative soilders are die
// who is last still alive 
// find that

// return 2l+1// l = n-2^x

#include <bits/stdc++.h>
using namespace std;
int find_2_power_x_nearN(int n){
	int x = 0;

	while((1<<x) <= n){
		x++;
	}
	return x - 1;
}

int f(int n , int x){
    int l = n- (pow(2,x)); // 2^x is near to n  
    return (2*l) + 1;
}
int main() {
    int n=9;
    int  x = find_2_power_x_nearN(n);
    cout << f(n , x); // n is till 1 to n soilders


   
    
    return 0;
}
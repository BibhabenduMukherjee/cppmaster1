

// given a number N your task is to find total set bit till 1 to N   (set bit means number of 1 in bits)

// procedure == >> 
       // 1. find nearest power of 2 that is <= N  
       // 2. and the total number of set bit in between (1 to 2^x-1) is (2^(x-1))*x
       // 3. and the total number of largest set bit in between (2^x to N)   is (N-2^x + 1)
       // 4. call the function again for (N - 2^x)  // base case When N==0 return 0


#include <bits/stdc++.h>
using namespace std;

int find_2_power_x_nearN(int n){
	int x = 0;

	while((1<<x) <= n){
		x++;
	}
	return x - 1;
}


int solution(int n){
	if(n == 0) return 0;
	int  x = find_2_power_x_nearN(n);
    int set_bit_till_2_power_x = (1<<(x-1))*x;
    int msb2xton = n - (1<<x) + 1;
    int rest = n- (1<<x);

    int ans = set_bit_till_2_power_x + msb2xton + solution(rest);
    
    return ans;
}

int main()
{

	int test_case; cin>>test_case;                 // test case 4 // input 5 17 34 67
	while(test_case--){
	int N; cin >> N;

	cout << "set bit--->>" <<" " <<  solution(N) <<endl;

}
	return 0;
}
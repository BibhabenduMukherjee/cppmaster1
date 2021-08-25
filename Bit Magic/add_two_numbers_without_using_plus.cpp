// add two numbers without using + operators 

//   rule operand are A and B 

//   sum = A^B  and carry = (A&B)<<1;   
//   then A = sum and B = carry


#include <bits/stdc++.h>
using namespace std;


int addTwoNumbers(int A, int B){

    int sum = 0; int carry = 0;

    while(B!=0){
    	sum = A^B;
    	carry = (A&B)<<1;
    	A = sum;
    	B = carry;
    }
    return A;
}

int main(){

    int t;
    cin >> t;

    while(t--)
    {

    	int A,B; cin >> A >> B;

    	cout << addTwoNumbers(A,B);
    }
	return 0;

}
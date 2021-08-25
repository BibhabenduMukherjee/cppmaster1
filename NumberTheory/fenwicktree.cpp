#include <bits/stdc++.h>
using namespace std;

// for creating a fenwick tree
// you take a same size array and 
// fill it in following manner


// 1] for 1 - 16 index array
// every odd index store only itself 
// if idx is even then find it's last set bit(LSB)
//  1011100 lsb is in 3 position find 2^2
// this index basically store the last 2^2 
// elements sum ;

// query 
// start from the R
// add THE value that store in sum 
// off the last set bit 
// whatevevr you get jump to that 
// index 
// till you reach too 00000

int main()
{


	return 0;
}
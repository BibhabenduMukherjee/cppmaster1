// given some tower
// print some instruction 
// to move given numbers from 1'st tower to 2'nd
// tower
// rule - > 1] top move first
//      - > 2] 1 move at a time
//      - > 3] small number move first



#include <bits/stdc++.h>
using namespace std;

void slove(int n , int A , int B, int C){
  if(n==0){
  	return;
  }

  slove(n-1 , A, C , B);
  cout << n <<" [" <<" " << A << "," << B <<" "<<"] " <<"\n";
  slove(n-1 , C , B , A);

}


int main(){
  

  int n , A ,B ,C;

  cin >> n >> A >> B >> C;

  slove(n , A ,B ,C);

	return 0;
}


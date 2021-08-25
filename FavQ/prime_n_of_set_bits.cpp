#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
  bool isP(int n){
      if(n<=1) return false;
      for(int i = 2; i*i <=n; i++){
          if(n%i == 0) return false;
      }
      return true;
  }
  bool binary(int n){
      
      int c =0 ;
      
      while(n > 0){
          n = n&(n-1);                 
          c++;
      } 
      if(isP(c)) return true;
      
      else return false;
  }
    int primeSetBits(int L, int R){
        // code here
        
        int cnt = 0;
        
        for(int i = L; i<= R; i++){
            if(binary(i)) cnt++;
        }
        
        return cnt;
    }
};

int main(int argc, char const *argv[])
{
	
	return 0;
}
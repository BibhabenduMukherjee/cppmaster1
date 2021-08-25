// We are given a string having parenthesis like below 
//      “( ((X)) (((Y))) )” 
// We need to find the maximum depth of balanced parenthesis, like 4 in the above example. Since ‘Y’ is surrounded by 4 balanced parentheses. 
// If parenthesis is unbalanced then return -1


// use stack to slove this problem in O(N) time and O(N) space
// efficient approach 
#include <bits/stdc++.h>
using namespace std;

int depth_of_parenthesis(string S){
     int n = S.length();
     int count_open_bracket = 0;
     int max = 0;

     for (int i = 0; i < n; ++i)
     {
          if(S[i] =='('){
               count_open_bracket++;
               if(count_open_bracket>max){max=count_open_bracket;}

          }else if(S[i]==')'){

              if(count_open_bracket>0){
                count_open_bracket--;
              }else {return -1;}
          }

      
     }
       if(count_open_bracket!=0) return -1;

      return max;
}
int main(){

  string S = "( a(b) (c) (d(e(f)g)h) I (j(k)l)m)";

  cout << depth_of_parenthesis(S);
  
 return 0;
}
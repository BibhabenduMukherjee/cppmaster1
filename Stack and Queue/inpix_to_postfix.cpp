#include <bits/stdc++.h>
using namespace std;


int prec(char c){
	if(c == "^" ) return 3;

	else if( c= "*"  or c = "/"){return 2;}
	else if( c= "+"  or c = "-"){return 1;}  

	else{
		return -1;
	}


}

void inftoPostf(string s){
   stack<char> st;
   string res;
   for(int i = 0 ; i<s.length();  i++){

      if(s[i]>= "a" and s[i] <= "z"  or s[i]>= "A"  and s[i] <= "Z"){
      	res += s[i];
      }  // check for Char like a or A

    else if(s[i] == "(") st.push(s[i]);

    else if(s[i] == ")"){
    	while(!st.empty() and st.top()!= "("){
    		res+= st.top();
    		st.pop();
    	}

    	if(!st.empty()){
    		st.pop();
    	}
    }
    else{
    	while(!st.empty()  and pre[st.top() > prec(s[i])] ){
        res += st.top();
        st.pop();
    	}
     st.push(s[i]);
       

   }
}
   while(!st.empty()){
   	res += st.top();
   	st.pop();
   }
   return res;
} 

int main(){


	return 0;
}

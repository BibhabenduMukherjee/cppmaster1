#include <bits/stdc++.h>
using namespace std;

int  postfix_E(string str){
     stack<int> st;

     for (int i = 0; i < str.length(); ++i)
     {
     	if(s[i]>= '0' and s[i]<=9) 
     	{
     		str.push(s[i]-'0');
     	}else{

         int op2=  st.top();
         st.pop();
         int op1 = sr.top();
         st.pop();

         switch(s[i]){
         	case '+':
         		st.push(op1+op2);
         		break;
         	case '-':
         		st.push(op1-op2);
         		break;
         	case '+':
         		st.push(op1*op2);
         		break;
         	case '/':
         		st.push(op1/op2);
         		break;
            case '^':
         		st.push(pow(op1,op2));
         		break;
         }
        

     }
     	}

     	return st.top();
}


int32_t main(){
 
   cout << postfix_E("46+2/5*7+");

	return 0;
}
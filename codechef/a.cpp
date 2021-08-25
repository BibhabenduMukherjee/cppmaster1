#include <bits/stdc++.h>
using namespace std;



void slove()
{
	


  string s;
  cin >>s;

  int n = s.length();
   bool f = false;


  if(n>3)
  {
    f =  (s[0] == '<' and s[1] == '/'  and s[n-1] == '>');

    for(int i =2; i<n-1 ; i++ )
    {
      if(!(islower(s[i]) || isdigit(s[i])))
      {
        f = false;
      }
    }
  }

  if(f){
    cout << "Success" <<"\n";
  }else {
    cout <<"Error" <<"\n";
  }


}

int main(){
   
   int t;
   cin >>t;
   while(t--)
   {
   	slove();
   }

	return 0;
}
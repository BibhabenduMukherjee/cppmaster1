#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;



void slove()
{
	string res;
	cin >> res;
    bool f = true;
  for (int i = 0; i < res.length(); ++i)
  {
     

  	 if(res[i] >= 'A' and res[i] <= 'Z' or res[i]!='<' and res[i+1] != '/' and res[res.length() - 1] != '>')
  	 {
  	 	f = false;
  	 }
  }

  if(f){
  	cout << "Success" <<"\n";
  }else{
  	cout << "Error"<<"\n";
  }

}

    




int main(){

   int t;
   cin>>t;
   while(t--)
   {
   	slove();
   }

	return 0;
}

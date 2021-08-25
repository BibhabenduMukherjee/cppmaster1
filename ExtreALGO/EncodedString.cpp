#include<bits/stdc++.h>

using namespace std;

int main()
{   
   

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    string alpha[16]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
     for(int i=0;i<n;i=i+4)
     {  
         string temp=s.substr(i,4);
         
         for(int j=0;j<16;j++)
         {
             if(temp==alpha[j])
             cout<<(char)(j+97);
         }
         
     }
     cout<<endl;
}

      

return 0;
}
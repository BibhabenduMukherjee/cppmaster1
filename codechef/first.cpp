#include  <stdio.h>
#include <bits/stdc++.h>
using namespace std;
typedef long long int nt;
void solve (vector <nt> &r,nt n)
{
    string s="";
    nt i,j=31;
    while(n>0)
    {
        s+=to_string(n%2);
        n/=2;
    }
        nt n1=s.size();
        for(i=0;i <n1;i++)
        {
            if(s[i]=='1')
            {
                r[j]+=1;
            }
            
            j--;
        }
        
    
}
int main()
{
    nt t,i,j;
    cin >> t;
    while(t--)
    {
        nt n,k;
       cin >> n >> k;
        vector<int> a(n);
        for(i=0;i  <  n;i++)
        cin>> a[i];
        
        vector<nt> r(32,0);
        for(i=0;i < n;i++)
        {
            solve(r,a[i]);
        }
        nt ans=0;
        for(i=0;i< 32;i++)
        {
            if(r[i]==0)
            continue;
            else if(r[i]%k==0)
            {
                ans+=(r[i]/k);
            }
            else
            {
                ans+=(r[i]/k+1);
            }
        }
        cout<< ans<<"\n";
    }

    return 0;
}

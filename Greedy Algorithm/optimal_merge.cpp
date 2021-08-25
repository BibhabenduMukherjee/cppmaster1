#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    
        int t;
        cin >> t;
      

        while(t--){
            int ans = 0;
            int n;
            cin >> n;
        
        vector<int> a(n);
        
        for(int i =0 ; i<n; i++){
            cin >> a[i];
        }
        
        priority_queue<int , vector<int> , greater<int>> min;
        
        for(int i = 0 ; i<n; i++){
            min.push(a[i]);
        }
        
        
        while(min.size()>1){
            int e1 = min.top();
            min.pop();
            int e2 = min.top();
            min.pop();
            
            ans += e1 + e2;
            
            min.push(e1+e2);
        }
        cout << ans;
    }

        
        
    
    
    return 0;
}
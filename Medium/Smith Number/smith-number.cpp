//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int smithNum(int n) {
        // code here
        
        int t=n,sum=0;
        while(t){
            sum+=t%10;
            t/=10;
        }
        
        // cout<<sum<<endl;
        map<int,int>pf;
        
        for(int i=2;i<=sqrt(n);i++){
            
            while(n%i==0){
                // cout<<i<<endl;
                pf[i]++;
                n/=i;
            }
            
        }
        if (n > 2) pf[n]++;
        
        int pfsum=0;
        int ch=0;
        for(auto &i:pf){
            if(i.second>1)ch=1;
        }
        if(pf.size()<2&&ch==0) return 0;
        
        for(auto &i:pf){
            
            int x=i.first,xsum=0;
            // cout<<x<<endl;
            while(x){
                xsum+=x%10;
                x/=10;
            }
            pfsum+=(xsum*i.second);
        }
        // cout<<pfsum<<endl;
        if(pfsum==sum)return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
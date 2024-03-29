//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        if(N==1) return 0;
        long long sum=1;
        for(long long i=2;i<=sqrt(N);i++){
            if(N%i==0&&(N%(N/i)==0)){
                sum+=i;
                sum+=(N/i);
                // cout<<i<<" "<<sum<<" ";
            }
        }
        if(sum==N) return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
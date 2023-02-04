//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> Series(int N) {
        // COde here
        vector<long long>v;
        long long int a=0;
        long long int b=1;
        v.push_back(a);
        v.push_back(b);
        if(N==0) return {0};
        if(N==1) return v;
        while(v.size()-1!=N){
            v.push_back(a+b);
            long long t=a+b;
            a=b;
            b=t;
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<long long> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
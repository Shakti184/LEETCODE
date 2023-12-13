//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	   long mod = 1000000007;
        long lastNumwithZero = 1, lastNumwithOnes = 1, currentNumwithZero = 0;
        for (int i = 1; i <= n; i++) {
            currentNumwithZero = (lastNumwithZero + lastNumwithOnes) % mod;
            lastNumwithOnes = lastNumwithZero;
            lastNumwithZero = currentNumwithZero;
        }
        return currentNumwithZero; 
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        set<int>v;
        // v.push_back(1);
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                v.insert(i);
                v.insert(n/i);
            }
        }
        // sort(v.begin(),v.end());
        for(auto i:v){
            cout<<i<<" ";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
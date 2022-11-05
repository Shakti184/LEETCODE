//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i=1;
        int z=1;
        while(i<=n){
            int j=1;
            int x=z;
            while(j<=i){
                cout<<x<<" ";
                x=x^1;
                j++;
            }
            z=z^1;
            i++;
            cout<<"\n";
        }
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
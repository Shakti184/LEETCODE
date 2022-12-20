//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int ans=-1;
        int mn=INT_MAX;
        int j=-1,k=-1;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                j=i;
            }
            if(a[i]==y){
                k=i;
            }
            if(j!=-1&&k!=-1)
                mn=min(mn,abs(k-j));
        }
        if(mn==INT_MAX) return -1;
        return mn;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
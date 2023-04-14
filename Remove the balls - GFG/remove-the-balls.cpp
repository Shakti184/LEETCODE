//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int N, vector<int> cl, vector<int> rd) {
        vector<pair<int,int>>v(N);
        for(int i=0;i<N;i++){
            v[i]={cl[i],rd[i]};
        }
        stack<pair<int,int>>st;
        if(N==0)return 0;
        for(int i=0;i<N;i++){
            if(st.empty()){
                st.push(v[i]);
            }else{
                if(st.top()==v[i]){
                    st.pop();
                }else{
                    st.push(v[i]);
                }
            }
        }
        return st.size();
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends
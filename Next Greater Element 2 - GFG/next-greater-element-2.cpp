//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int n, vector<int>& ar) {
        // code here
        stack<int>st;
        vector<int>v(2*n);
        vector<int>arr;
        for(int i=0;i<n;i++){
            arr.push_back(ar[i]);
        }
        for(int i=0;i<n;i++){
            arr.push_back(ar[i]);
        }
        for(int i=2*n-1;i>=0;i--){
            if(i==2*n-1){
                st.push(arr[i]);
                v[i]=-1;
            }else{
                while(!st.empty()&&arr[i]>=st.top()){
                    st.pop();
                }
                if(st.empty()){
                    st.push(arr[i]);
                    v[i]=-1;
                }else{
                    int x=st.top();
                    st.push(arr[i]);
                    v[i]=x;
                }
            }
        }
        
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(v[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices){
        //write your code here
        vector<int>v(n);
        // stack<int>st;
        // for(int i=n-1;i>=0;i--){
        //     if(i==n-1){
        //         v[i]=-1;
        //         st.push(arr[i]);
        //     }else{
        //         while(!st.empty()&&arr[i]>=st.top()){
        //             st.pop();
        //         }
                
        //         if(st.empty()){
        //             v[i]=-1;
        //         }else{
        //             v[i]=arr[i];
        //         }
                
        //         st.push(arr[i]);
        //     }
        // }
        
        vector<int>ans;
        for(int i=0;i<queries;i++){
            int x=arr[indices[i]];
            int c=0;
            for(int j=indices[i]+1;j<n;j++){
                if(arr[j]>x)c++;
            }
            ans.push_back(c);
        }
        
        return ans;
       
    }

};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> v1(n);
       for(int i = 0;i<n;i++) cin >> v1[i];
        int q; cin >> q;
        vector<int> v2(q);
        for(int i = 0;i<q;i++) cin >> v2[i];

        Solution obj;
        vector<int> ans = obj.count_NGE(n,v1,q,v2);

        for(int i = 0;i<ans.size();i++)
            cout << ans[i] << " ";
        cout << endl;

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
         // code here
         priority_queue<int,vector<int>,greater<int>>q;
         for(int i=0;i<N;i++){
             q.push(arr[i]);
         }
         long sum=0;
         
         while(q.size()!=1){
             int a=q.top();
             q.pop();
        
             int b=q.top();
             q.pop();
             int s=a+b;
             sum+=s;
             //cout<<sum<<" ";
             q.push(s);
         }
         return sum;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends
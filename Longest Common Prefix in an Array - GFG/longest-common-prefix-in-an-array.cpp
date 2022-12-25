//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n){
        int c=INT_MAX;
        
        sort(arr,arr+n);
        string t=arr[n-1];
        if(n==1) return t;
        for(int i=n-2;i>=0;i--){
            string p=arr[i];
            int m=0;
            for(int j=0;j<p.size();j++){
                if(p[j]==t[j])m++;
                else break;
            }
            c=min(c,m);
        }
        //cout<<c<<"---";
        if(c==INT_MAX||c==0) return "-1";
        string ans=t.substr(0,c);
        return ans;
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code here
        int n=s.size();
        string ans,temp;
        int a=-1;
        
        for(int i=n-1;i>=0;i--){
            if(int(s[i]-'0')%2!=0){
                a=i;
                break;
            }
        }
        if(a==-1) return "";
        ans=s.substr(0,a+1);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends
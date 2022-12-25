//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        int n=s1.size(),m=s2.size();
        if(n!=m) return 0;
        
        string t=s1;
        if(t==s2) return 1;
        for(int i=0;i<n;i++){
            char a=t[0];
            t.erase(t.begin());
            
            t+=a;
            //cout<<t<<endl;
            if(t==s2) return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends
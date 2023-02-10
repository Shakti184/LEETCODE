//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='l'||s[i]=='b'||s[i]=='o'||s[i]=='n') m[s[i]]++;
        }
        int mn1=INT_MAX,mn2=INT_MAX;
        int a=m['a'];
        int b=m['b'];
        int n=m['n'];
        int l=m['l'];
        int o=m['o'];
        mn1=min(a,min(b,n));
        mn2=min(l,o);
        if(mn1==0||mn2/2==0) return 0;
        if(mn1>=mn2/2) return mn2/2;
        if(mn1<=mn2/2) return mn1;
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends
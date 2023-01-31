//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string magicalString(string s){
        // code here 
        int n=s.size();
        for(int i=0;i<n;i++){
            // char c=s[i];
            char nc='a'+25-(s[i]-'a');
            s[i]=nc;
        }
        return s;
    }
    
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.magicalString(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
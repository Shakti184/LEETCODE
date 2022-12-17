//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        int n=s.size(),c=0;
        string ans, temp;
        for(int i=0;i<=n;i++){
            if(i==n){
                string a;
                a+=temp;
                if(c==0)
                    c=1;
                else a+=".";
                a+=ans;
                ans=a;
            }else{
                if(s[i]=='.'){
                    string a;
                    a+=temp;
                    if(c==0){
                        c=1;
                    }else{
                        a+=".";
                    }
                    a+=ans;
                    ans=a;
                    temp="";
                }else{
                    temp+=s[i];
                }
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
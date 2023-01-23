//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        vector<char>v;
        for(auto i:s){
            if(!v.empty()){
                if(v.back()==i){
                    v.pop_back();
                }else{
                    v.push_back(i);
                }
            }else{
                v.push_back(i);
            }
        }
        string ans;
        for(auto i:v){
            ans+=i;
        }
        if(ans.size()==0) return "-1";
        return ans;
    }
    
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
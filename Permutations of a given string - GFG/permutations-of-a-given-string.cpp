//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void sol(vector<string>&ans,int idx,int n,string &s){
	        if(idx==n){
	            ans.push_back(s);
	            return;
	        }
	        for(int i=idx;i<n;i++){
	            swap(s[idx],s[i]);
	            sol(ans,idx+1,n,s);
	            swap(s[idx],s[i]);
	        }
	    }
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>ans;
		    
		    sol(ans,0,S.size(),S);
		    set<string>st;
		    for(auto i:ans)
		        st.insert(i);
		    
		    ans.clear();
		    for(auto i:st)
		        ans.push_back(i);
		    
		    return ans;
		    
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
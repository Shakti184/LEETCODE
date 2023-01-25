//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void sol(vector<string>&v,string s,int idx,string temp){
	    if(idx>=s.size()){
	        if(temp.size()>0)
	        v.push_back(temp);
	        return;
	    }
	    
	    sol(v,s,idx+1,temp);
	    
	    temp+=s[idx];
	    
	    sol(v,s,idx+1,temp);
	    
	    
	    
	}
		vector<string> AllPossibleStrings(string s){

		    vector<string>v;
		    sol(v,s,0,"");
		    sort(v.begin(),v.end());
		    return v;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends
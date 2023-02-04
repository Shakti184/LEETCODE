//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    long long int fact(long long int n){
        return (n == 1 || n == 0) ? 1 : fact(n - 1) * n;
    }
    vector<string> permutation(string S)
    {
        //Your code here
        set<string>st;
        long long n=S.size(),m=fact(n);
        for(int i=0;i<=m;i++){
            st.insert(S);
            next_permutation(S.begin(),S.end());
        }
        vector<string>v;
        for(auto i:st){
            v.push_back(i);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends
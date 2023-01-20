//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int c=0;
    int fun(string s,int n,int i){
        if(i>=s.size()) return n;
        if(s[i]>='0'&&s[i]<='9'){
            int a=s[i]-'0';
            return fun(s,n*10+a,i+1);
        }else{
            c=1;
            return -1;
        }
    }
    int atoi(string s) {
        //Your code here
        // int n=s.size();
        // int i=0;
        // int ans=0;
        // if(s[i]=='-') i++;
        // for(i;i<n;i++){
        //     if(!isdigit(s[i])) return -1;
        //     int a=s[i]-'0';
        //     ans=ans*10+a;
        // }
        // if(s[0]=='-') return -ans;
        // return ans;
        int x;
        if(s[0]=='-')
            x=fun(s,0,1);
        else x=fun(s,0,0);
        if(c==1) return -1;
        
        if(s[0]=='-')
            return -1*x;
        else
            return x;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends
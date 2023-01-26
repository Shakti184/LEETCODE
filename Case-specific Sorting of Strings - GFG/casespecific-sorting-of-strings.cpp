//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<int>ch(n),cap,sml;
        
        for(int i=0;i<n;i++){
            if(str[i]<='z'&&str[i]>='a'){
                ch[i]=0;
                sml.push_back(str[i]);
            }
            else {
                ch[i]=1;
                cap.push_back(str[i]);
            }
        }
        
        sort(cap.begin(),cap.end());
        sort(sml.begin(),sml.end());
        
        string ans;
        int i=0,j=0;
        for(int k=0;k<n;k++){
            if(ch[k]==0){
                ans+=sml[i++];
            }else{
                ans+=cap[j++];
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends
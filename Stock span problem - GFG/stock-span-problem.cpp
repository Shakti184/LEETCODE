//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int pr[], int n)
    {

        stack<pair<int,int>>st;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int c=1;
            if(st.empty()){
                st.push({pr[i],1});
                ans[i]=1;
                continue;
            }
            while(!st.empty()&&st.top().first<=pr[i]){
                c+=st.top().second;
                st.pop();
            }
            ans[i]=c;
            st.push({pr[i],c});
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends
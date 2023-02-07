//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int nn){
           //code here
           int ans=0;
           int fn=-1,nc=0;
           int z=-1;
           for(int i=0;i<nn;i++){    
               if(arr[i]<0){
                   nc++;
                   if(fn==-1){
                       fn=i;
                   }
               }
               if(arr[i]==0){
                   z=i;
                   nc=0;
                   fn=-1;
               }else{
                   if(nc%2==0){
                       ans=max(ans,i-z);
                   }else{
                       ans=max(ans,i-fn);
                   }
               }
            }
           return ans;
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>nums){
	    // Code here.
	    int n=nums.size(),c=0;
	   // for(int i=0;i<n-2;i++){
	   //     for(int j=i+1;j<n-1;j++){
	   //         for(int k=j+1;k<n;k++){
	   //             if(nums[i]<nums[j]&&nums[j]<nums[k]){
	   //                 c++;
	   //             }
	   //         }
	   //     }
	   // }
	   for(int i=0;i<n;i++){
	       int d=0,e=0;
	        for(int j=0;j<i;j++){
	            if(nums[j]<nums[i])d++;
	        }
	        for(int j=i+1;j<n;j++){
	            if(nums[i]<nums[j])e++;
	        }
	        c+=(d*e);
	    }
	    return c;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends
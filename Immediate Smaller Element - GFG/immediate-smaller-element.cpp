//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	    vector<int>ans(n);
	    
	    int x=arr[n-1];
	    arr[n-1]=-1;
	    for(int i=n-2;i>=0;i--){
	        
	        if(arr[i]<=x){
	            x=arr[i];
	            arr[i]=-1;
	        }else{
	            int y=arr[i];
	            arr[i]=x;
	            x=y;
	        }
	    }
	   // for(int i=0;i<n;i++){
	   //     arr[i]=ans[i];
	   // }
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.immediateSmaller(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
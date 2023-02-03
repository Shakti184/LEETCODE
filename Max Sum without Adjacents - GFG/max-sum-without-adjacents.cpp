//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    if(n==1) return arr[0];
	    if(n==2) return max(arr[0],arr[1]);
	    if(n==3) return max(arr[1],arr[0]+arr[2]);
	    int a=arr[0],b=arr[1],c=arr[2]+a;
	    for(int i=3;i<n;i++){
	        if(a>b){
	            arr[i]+=a;
	            a=b;
	            b=c;
	            c=arr[i];
	        }else{
	            arr[i]+=b;
	            a=b;
	            b=c;
	            c=arr[i];
	        }
	    }
	    return max(a,max(b,c));
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool cmp(string a,string b){
	    string x=a+b,y=b+a;
	    
	    return x>y;
	    
	}
	string printLargest(vector<string> &arr) {
	    // code here
	    sort(arr.begin(),arr.end(),cmp);
	    string s;
	    int c=0;
	    for(int i=0;i<arr.size();i++){
	        s+=arr[i];
	    }
	    if(c==1) return "0";
	    return s;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
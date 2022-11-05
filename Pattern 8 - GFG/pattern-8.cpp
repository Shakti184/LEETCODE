//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    int i=n;
	    int m=2*n-1;
	    while(i--){
	        for(int j=0;j<=(m/2+i);j++){
	            if((j<=(m/2+i))&&(j>=(m/2-i))){
	                cout<<"*";
	            }
	            else{
	                cout<<" ";
	            }
	        }
	        cout<<"\n";
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
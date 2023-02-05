//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

#include<bits/stdc++.h>
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        long long pre[n+1],suf[n+1];
        memset(pre,0,sizeof(pre));
        memset(suf,0,sizeof(suf));
        
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+a[i];
        }
        for(int i=n-1;i>=0;i--){
            suf[i]=suf[i+1]+a[i];
        }
        
        if(n==1) return 1;
        
        for(int i=1;i<=n;i++){
            if(pre[i]==suf[i-1]){ return i;}
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
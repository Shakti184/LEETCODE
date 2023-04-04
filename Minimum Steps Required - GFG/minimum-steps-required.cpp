//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string s) {
    // Write your code here.
    int n=s.size();
    int a=0,b=0;
    for(int i=0;i<n;){
        if(s[i]=='a'){
            a++;
            while(i<n&&s[i]=='a')i++;
        }else{
            b++;
            while(i<n&&s[i]=='b')i++;
        }
    }
    return min(a+1,b+1);
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends
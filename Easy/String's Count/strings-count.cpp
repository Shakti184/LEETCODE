//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


long long int countStr(long long int n){
    //complete the function here
    long long int ans=0;
    ans+=1;
    ans+=n;
    ans+=n;
    
    ans+=n*(n-1);
    ans+=(n*(n-1))/2;
    
    ans+=(n*((n-1)*(n-2))/2);
    
    return ans;
}
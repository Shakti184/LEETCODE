//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
        // code here
        vector<int> pattern(int N) {
        vector<int> result;
        generatePattern(N, true, result);
        return result;
    }
    
private:
    void generatePattern(int N, bool increasing, vector<int>& result) {
        result.push_back(N);
        
        if (N > 0 && increasing)
            generatePattern(N - 5, true, result);
        else if (N != result[0])
            generatePattern(N + 5, false, result);
    }
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
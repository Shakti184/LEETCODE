//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        // code here
        int m=n*2-1;
        int j=1;
        while(m--){
            int i=1;
            
            while(j>=i){
                cout<<"* ";
                i++;
            }
            if(m<n){
                j--;
            }else{
                j++;
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
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        while(l<=h){
            int m=(l+h)>>1;
            if(A[m]==key) return m;
            if(A[l]<=A[m]){
                if(A[l]<=key&&A[m]>=key){
                    h=m-1;
                }else{
                    l=m+1;
                }
            }else{
                if(A[m]<=key&&key<=A[h]){
                    l=m+1;
                }else{
                    h=m-1;
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends
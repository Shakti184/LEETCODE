//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int n, vector<int> &A) {
       vector<int>pre(n),suf(n);
        for(int i=0;i<n;i++){
            if(i==0){
                pre[i]=A[i];
                continue;
            }
            pre[i]=pre[i-1]+A[i];
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                suf[i]=A[i];
                continue;
            }
            suf[i]=suf[i+1]+A[i];
        }
        for(int i=0;i<n;i++){
            // cout<<pre[i]<<" "<<suf[i]<<endl;
            if(pre[i]==suf[i]) return i+1;
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
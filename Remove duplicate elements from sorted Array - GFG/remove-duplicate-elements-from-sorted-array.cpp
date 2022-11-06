//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        // set<int>s;
        // for(int i=0;i<n;i++){
        //     s.insert(arr[i]);
        // }
        int c=1,j=1;
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                c++;
                a[j]=a[i+1];
                j++;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends
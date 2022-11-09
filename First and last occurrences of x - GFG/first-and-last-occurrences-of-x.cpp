//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int l=0,l1=-1,h1=-1,h=n-1;
    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]==x){
            l1=m;
            h1=m;
        }
        if(arr[m]>x){
            h=m-1;
        }else{
            l=m+1;
        }
    }
    
    while(l1-1>=0&&arr[l1-1]==x){
        l1--;
    }
    while(h1+1<n&&arr[h1+1]==x){
        h1++;
    }
    return {l1,h1};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
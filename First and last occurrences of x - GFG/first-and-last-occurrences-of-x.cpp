//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int FO_BS(int arr[],int k,int n){
    int l=0,h=n-1,m;
    while(l<=h){
        m=(l+h)/2;
        if((m==0&&arr[m]==k)||(m-1>=0&&arr[m-1]!=k&&arr[m]==k)) return m;
        if(arr[m]>=k){
            h=m-1;
        }else{
            l=m+1;
        }
    }
    return -1;
}

int LO_BS(int arr[],int k,int n){
    int l=0,h=n-1,m;
    while(l<=h){
        m=(l+h)/2;
        if((m==n-1&&arr[m]==k)||(m+1<n&&arr[m+1]!=k&&arr[m]==k)) return m;
        if(arr[m]>k){
            h=m-1;
        }else{
            l=m+1;
        }
    }
    return -1;
}


vector<int> find(int arr[], int n , int x )
{
    // code here
    int a=FO_BS(arr,x,n);
    int b=LO_BS(arr,x,n);
    return {a,b};
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
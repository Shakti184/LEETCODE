//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends

int BS(int arr[],int l,int h,int t){
    int m;
    while(l<=h){
        m=(l+h)/2;
        if(arr[m]==t) return m;
        if(arr[m]<t) l=m+1;
        else h=m-1;
    }
    return -1;
}

bool findPair(int arr[], int size, int n){
    //code
    
    sort(arr,arr+size);
    
    for(int i=0;i<size;i++){
        int a=BS(arr,i+1,size-1,n+arr[i]);
        if(a!=-1) return true;
    }
    
    return false;
    
}
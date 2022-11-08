//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    int arr[N+1];
    for(int i=0;i<=N;i++){
        arr[i]=0;
    }
    
    for(int i=0;i<N-1;i++){
        arr[A[i]]=1;
    }
    
    for(int i=1;i<=N;i++){
        if(arr[i]==0) return i;
    }
    return -1;
}
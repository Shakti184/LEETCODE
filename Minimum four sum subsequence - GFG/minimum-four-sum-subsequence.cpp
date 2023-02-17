//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
/*You are required to complete below method */

class Solution{
    public:
    int minSum(int arr[], int n){
        //Write your code here
        if(n<4) return *min_element(arr,arr+n);
        int a=arr[0],b=arr[1],c=arr[2],d=arr[3];
        for(int i=4;i<n;i++){
            arr[i]+=min(a,min(b,min(c,d)));
            a=arr[i-3];
            b=arr[i-2];
            c=arr[i-1];
            d=arr[i];
        }
        return min(a,min(b,min(c,d)));
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.minSum(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends
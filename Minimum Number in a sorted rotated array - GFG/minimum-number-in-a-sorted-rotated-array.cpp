//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int l, int h)
    {
        // Your code here
        int m;
        int n=h;
        while(l<=h){
            m=(l+h)/2;
            if(arr[m+1]<arr[m]) return arr[m+1];
            if(arr[m]>arr[n]){
                l=m+1;
            }else{
                h=m-1;
            }
        }
        return arr[0];
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
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}
// } Driver Code Ends
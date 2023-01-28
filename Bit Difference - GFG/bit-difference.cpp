//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        
        int c=0;
        for(int i=0;i<32;i++){
            if(!a&&!b) return c;
            // cout<<c<<endl;
            // cout<<int(a&1)<<" "<<int(b&1)<<endl;
            if(int(a&1)!=int(b&1))c++;
            a=a>>1;
            b=b>>1;
        }
        return c;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}
// } Driver Code Ends
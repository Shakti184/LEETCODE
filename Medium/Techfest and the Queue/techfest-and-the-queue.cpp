//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	int sumOfPowers(int a, int b){
	    // Code here
	    unordered_map<int,int>mp;
	    
	    if(a==1&&b==1) return 0;
	    
	    int ans=0;
	    for(int i=a;i<=b;i++){
	        int n=0,x=i;
	        while(x%2==0){
	            x/=2;
	            n++;
	        }
	        for(int j=3; j<= sqrt(i) ;j+=2){
	            while(x%j==0){
	                x/=j;
	                n++;
	            }
	        }
	        if(x>1){
	            n++;
	        }
	       // cout<<n<<endl;
	        ans+=n;
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
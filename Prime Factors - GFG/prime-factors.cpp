//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	map<int,int>pf;
    void primeFactors(int n){
        while (n % 2 == 0){
            pf[2]++;
            n = n/2;
        }
        for(int i = 3; i <= sqrt(n); i = i + 2){
            while (n % i == 0){
                pf[i]++;
                n = n/i;
            }
        }
        if (n > 2) pf[n]++;
    }
	vector<int>AllPrimeFactors(int N) {
	    
	    vector<int>v;
	    
	    primeFactors(N);
	    
	    for(auto i:pf){
	        v.push_back(i.first);
	    }
	    return v;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends
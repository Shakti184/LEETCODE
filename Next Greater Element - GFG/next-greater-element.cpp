//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>st;
        
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                st.push(arr[i]);
                arr[i]=-1;
            }
            else{
                while(!st.empty()&&arr[i]>=st.top()){
                    st.pop();
                }
                
                if(st.empty()){
                    st.push(arr[i]);
                    arr[i]=-1;
                }
                else {
                    long long int x=st.top();
                    st.push(arr[i]);
                    arr[i]=x;
                }
            }
        }
        return arr;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends
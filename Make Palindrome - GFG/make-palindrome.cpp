//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        int c=0;
        string r;
       map<string,int>mp1,mp2,mp3;
       vector<string>v;
       for(int i=0;i<n;i++){
             r=arr[i];
             reverse(r.begin(),r.end());
            v.push_back(r);
       }
       for(int i=0;i<n;i++){
            if(v[i]==arr[i]){
                mp1[v[i]]++;
            }
            else{
                 mp2[arr[i]]++;
                 mp3[v[i]]++;
            }
       }
       for(auto &x:mp1){ 
            if(x.second&1==1)c++;
       }
       if(c>=2)return false;
       else{
          if(mp2==mp3)return true;
          else return false;
       }
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends
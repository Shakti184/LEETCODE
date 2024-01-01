//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            nums[i]%=k;
        }
        
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int  v=0;
        for(int i=0;i<n;i++){
            if(nums[i]%k!=0) {
                mp[nums[i]]++;
                v++;
            } 
        }
        
        if(v%2!=0) return false;
        
        for(auto &i:mp){
            int c=i.second,a=i.first;
            if(mp.find(k-a)==mp.end()){
                return false;
            }else{
                if(c!=mp[k-a]) return false;
            }
        }
        
        return true;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends
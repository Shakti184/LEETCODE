class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        //method 1
        
        int n=nums.size();
        if(n<2) return false;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            if(m.find(nums[i])!=m.end()){
                if(abs(i-m[nums[i]])<=k) return true;
            }
            m[nums[i]]=i;
        }
                 return false;
        
        //method 2
        
        // vector<pair<int,int>>v;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     v.push_back({nums[i],i});
        // }
        // sort(v.begin(),v.end());
        // n=v.size();
        // for(int i=1;i<n;i++){
        //     if(v[i].first==v[i-1].first&&(abs(v[i].second-v[i-1].second)<=k)){
        //         return true;
        //     }
        // }
         // return false;
    }
};
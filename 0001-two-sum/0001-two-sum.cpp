class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        // vector<pair<int,int>>v(n);
        // for(int i=0;i<n;i++)v[i]={nums[i],i};
        // sort(v.begin(),v.end());
        // for(int i=0;i<n-1;i++){
        //     int t=target-v[i].first;
        //     int ll=v[i].second;
        //     int l=i+1,h=n-1;
        //     while(l<=h){
        //         int m=(l+h)/2;
        //         if(v[m].first==t)return {ll,v[m].second};
        //         if(v[m].first>t){
        //             h=m-1;
        //         }else l=m+1;
        //     }
        // }
        // return {};
        // O(nlog(n))
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i])!=mp.end()){
                return {mp[target-nums[i]],i};
            }else mp[nums[i]]=i;
        }
        return {};
    }
};
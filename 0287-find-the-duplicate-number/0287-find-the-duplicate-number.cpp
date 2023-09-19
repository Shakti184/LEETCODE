class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int prev=nums[0];
        for(int i=1;i<n;i++){
             if(prev==nums[i]){
                 return prev;
             }
            prev=nums[i];
        }
        // unordered_map<int,int>m;
        // int i;
        // for(i=0;i<n;i++){
        //     if(m.find(nums[i])==m.end()){
        //         m.insert({nums[i],1});
        //     }else{
        //         break;
        //     }
        // }
        // return nums[i];
        return n;
    }
};
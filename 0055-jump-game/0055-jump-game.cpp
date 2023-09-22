class Solution {
public:
    bool canJump(vector<int>& nums) {
        int r=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            r=max(r,nums[i]+i);
            if(r<=i)  return false;
        }
        return true;
    }
};
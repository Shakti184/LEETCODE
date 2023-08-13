class Solution {
public:
    vector<int> t;
    bool solve(int i, vector<int>& nums){
        if(i >= nums.size()){
            return true;
        }
        if(t[i] != -1){
            return t[i];
        }
        bool cond1 = false, cond2 = false, cond3 = false;
        if(i+1 < nums.size()){
            if(nums[i] == nums[i+1]){
                cond1 = solve(i+2, nums);
            }
        }
        if(i+1 < nums.size() && i+2 < nums.size()){
            if(nums[i] == nums[i+1] && nums[i+1] == nums[i+2]){
                cond2 = solve(i+3, nums);
            }
        }
        if(i+1 < nums.size() && i+2 < nums.size()){
            if(nums[i+1] - nums[i] == 1 && nums[i+2] - nums[i+1] == 1){
                cond3 = solve(i+3, nums);
            }
        }

        return t[i] = cond1 || cond2 || cond3;
    }
    bool validPartition(vector<int>& nums) {
        t = vector(nums.size()+3, -1);
        return solve(0, nums);
    }
};
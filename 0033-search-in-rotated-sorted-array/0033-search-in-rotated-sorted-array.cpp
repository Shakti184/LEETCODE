class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        //vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            return i;
        }
        return -1;
    }
};
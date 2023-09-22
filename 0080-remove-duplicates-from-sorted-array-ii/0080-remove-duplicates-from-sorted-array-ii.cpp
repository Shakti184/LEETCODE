class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int c=0,a=0,n=nums.size();
        while(i<n){
            nums[a]=nums[i];
            a++;i++;
            if(i<n && nums[a-1]==nums[i]){
                nums[a]=nums[i];
                a++;
                while(i<n&&nums[a-1]==nums[i])i++;
            }
        }
        return a;
    }
};
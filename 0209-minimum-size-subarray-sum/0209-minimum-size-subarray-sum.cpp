class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,n=nums.size(),i=0,j=0,count=INT_MAX;
        
        while(i<n){
            sum+=nums[i];
            if(sum>=target){
                while(sum>=target){
                sum=sum-nums[j];
                j++;
            }
                count=min(count,i-j+1);
            }
            i++;
        }
        if(count==INT_MAX) return 0;
        return count+1;
    }
};
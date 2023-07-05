class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int lastcnt=0,ans=0,currcnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1)currcnt++;
            else{
                ans=max(currcnt+lastcnt,ans);
                lastcnt=currcnt;
                currcnt=0;
            }
        }
    
        ans=max(ans,currcnt+lastcnt);
        return (ans==n)?ans-1:ans;
    }
};
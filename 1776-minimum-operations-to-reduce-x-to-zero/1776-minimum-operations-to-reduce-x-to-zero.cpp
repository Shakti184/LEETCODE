class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int tsum=0;
        for(int i=0;i<n;i++){
            tsum+=nums[i];
        }
        tsum-=x;
        if(tsum==0) return n;
        if(tsum<0) return -1;
        int sum=0,count=-1;
        int j=0,i=0;
        while(i<n){
            sum+=nums[i];
            while(sum>tsum){
                sum-=nums[j];
                j++;
            }
            if(sum==tsum){
                count=max(count,i-j+1);
            }
            i++;
        }
        if(count==-1) return -1;
        return n-count;
    }
};
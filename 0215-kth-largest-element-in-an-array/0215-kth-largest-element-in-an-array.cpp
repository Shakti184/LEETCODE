class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end(),greater<>());
        // return nums[k-1];
        // priority_queue<int>q;  maxheap
        priority_queue<int,vector<int>,greater<int>>q;//minheap

        for(auto &i:nums){
            q.push(i);
            if(q.size()>k) q.pop();
        }


        
        return q.top();
    }
};
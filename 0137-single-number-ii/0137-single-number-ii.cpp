class Solution {
public:
    int singleNumber(vector<int>& nums) {
         unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(m.find(nums[i])!=m.end()){
                if(m[nums[i]]==2) m.erase(nums[i]);
                else m[nums[i]]++;
            }else{
                m.insert({nums[i],1});
            }
        }
        return m.begin()->first;
        return n;
    }
};
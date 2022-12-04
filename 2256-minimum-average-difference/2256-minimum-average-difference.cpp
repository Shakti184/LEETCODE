class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        vector<long long >pre(n),suf(n);
        long long a=0;
        for(int i=0;i<n;i++){
            a+=nums[i];
            pre[i]=a;
        }
        
        a=0;
        for(int i=n-1;i>0;i--){
            a+=nums[i];
            suf[i-1]=a;
        }
        
        long long ans=0,mn=LLONG_MAX	;
        for(int i=0;i<n;i++){
            int b=i+1,c=n-i-1;
            int m=0;
            
            if(c!=0){
              
                    m=abs((pre[i]/b)-(suf[i]/c));
            }else{
                    m=pre[i]/b;
            }

            if(m<mn){
                ans=i;
                mn=m;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int bestClosingTime(string c) {
        int n=c.size();
        int s1=0,s2=0;
        vector<int>pre(n,0),pos(n,0);
        for(int i=0;i<n;i++){
            pre[i]=s2;
            if(c[i]=='N')s2++;
        }

        for(int i=n-1;i>=0;i--){
            if(c[i]=='Y') s1++;
            pos[i]=s1;
        }
        long long int ans=0;
        int mn=INT_MAX,j=0;
        for(int i=0;i<n;i++){
            ans=pos[i]+pre[i];
            if(mn>ans){
                mn=ans;
                j=i;
            }
        }
        if(pre[j]+pos[j]==pre[n-1]+pos[n-1]){
            if(c[n-1]=='Y') return n;
        }

        return j;
    }
};
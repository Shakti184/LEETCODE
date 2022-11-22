class Solution {
public:
    int numSquares(int n) {
        int c=1;
        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        while(c*c<=n){
            int sq=c*c;
            for(int i=sq;i<=n;i++){
                dp[i]=min(dp[i-sq]+1,dp[i]);
            }
            c++;
        }
        return dp[n];
    }
};
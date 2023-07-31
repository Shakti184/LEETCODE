class Solution {
public:
    // int lcs(string s1,string s2){
    //     int n1=s1.size();
    //     int n2=s2.size();
    //     vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
    //     for(int i=1;i<=n1;i++){
    //         for(int j=1;j<=n2;j++){
    //             if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
    //             else{
    //                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    //             }
    //         }
    //     }
    //     return dp[n1][n2];
    // }
    int solve(string &s1,string &s2,int i,int j,vector<vector<int>>&dp){
        if(i==0){
            int sum1=0;
            for(int k=0;k<j;k++){
                sum1+=s2[k];
            }
            return dp[i][j]=sum1;
        }
        if(j==0){
            int sum2=0;
            for(int k=0;k<i;k++){
                sum2+=s1[k];
            }
            return dp[i][j]=sum2;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i-1]!=s2[j-1]){
            int ans1=s1[i-1]+solve(s1,s2,i-1,j,dp);
            int ans2=s2[j-1]+solve(s1,s2,i,j-1,dp);
            return dp[i][j]=min(ans1,ans2);
        }
        else{
            return dp[i][j]=solve(s1,s2,i-1,j-1,dp);
        }
    }
    int minimumDeleteSum(string s1, string s2) {
        //return lcs(s1,s2);
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        return solve(s1,s2,s1.size(),s2.size(),dp);
        
    }
};
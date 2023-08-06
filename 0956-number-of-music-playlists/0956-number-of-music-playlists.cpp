class Solution {
public:
    int mod = 1e9 + 7;
    
    long long int solve(int cur_goal, int old_song, int n, int k,vector<vector<long long int>>& dp)
    {
        if(cur_goal == 0 && old_song == n)
            return 1;
        if(cur_goal == 0 || old_song > n)
            return 0;
        if(dp[cur_goal][old_song] != -1)
            return dp[cur_goal][old_song];

        //Choose new song
        dp[cur_goal][old_song] = ((n - old_song) * solve(cur_goal - 1, old_song + 1, n, k,dp))%mod;
        
        //Choose old song that have been already in the playlist...
        if(old_song > k)
            dp[cur_goal][old_song] += ((old_song - k)%mod * solve(cur_goal - 1, old_song, n, k,dp))%mod;
        
        dp[cur_goal][old_song] %= mod;
        return dp[cur_goal][old_song];
    }
    int numMusicPlaylists(int n, int goal, int k) {

        vector<vector<long long int>> dp(goal+1,vector<long long int>(n+1,-1));

        return solve(goal,0,n,k,dp);
    }
};
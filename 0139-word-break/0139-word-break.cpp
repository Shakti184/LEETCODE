class Solution {
public:
    bool wordBreak(string str, vector<string>& wordDict) {
        
        int n = str.length();

        set<string> st;

        for(auto &word : wordDict) {
            st.insert(word);
        }

        vector<int> dp(n + 1, 0);
        dp[0] = 1;

        for(int i = 0; i < n; i++) {
            string word = "";
            for(int j = i; j < min(n, i + 20); j++) {
                word += str[j];
                if(st.find(word) != st.end()) {
                    dp[j + 1] |= dp[i];
                }
            }
        }

        return dp[n];

    }
};
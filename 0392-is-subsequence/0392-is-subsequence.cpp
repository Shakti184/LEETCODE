class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size(),m=t.size();
        int k=0;
        for(int i=0;i<m;i++){
            if(k<n&&s[k]==t[i]){
                k++;
            }
        }
        if(k==n) return true;
        return false;
    }
};
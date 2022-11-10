class Solution {
public:
    string removeDuplicates(string s) {
        int i=0,j=0;
        string ans;
        while(i<s.size()){
            if(ans.size()>0){
                if(ans[ans.size()-1]==s[i]){
                    ans.erase(ans.end()-1);
                }else{
                    ans+=s[i];
                }
            }else{
                ans+=s[i];
            }
            i++;
        }
        return ans;
    }
};
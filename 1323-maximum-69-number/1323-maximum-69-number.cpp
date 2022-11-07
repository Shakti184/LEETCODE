class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num),ans=s;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='6'){
                s[i]='9';
                ans=max(ans,s);
                s[i]='6';
            }else{
                s[i]='6';
                ans=max(ans,s);
                s[i]='9';
            }
        }
        int m=stoi(ans);
        return m;
    }
};
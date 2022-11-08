class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        string ans;
        stack<char>st;
        st.push(s[0]);
        for(int i=1;i<n;i++){
            if((!st.empty())&&'a'<=st.top()&&st.top()<='z'){
                if(s[i]+32==st.top()){
                    st.pop();
                }else{                    
                    st.push(s[i]);
                }
               
            }else{
                if((!st.empty())&&s[i]-32==st.top()){
                    st.pop();
                }else{
                   st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
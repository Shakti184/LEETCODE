class Solution {
public:
    string convertToTitle(int n) {
        string s;
        int c=n;
        while(c){
            c--;
            int r=c%26;
            s+=char('A'+r);
            c=c/26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
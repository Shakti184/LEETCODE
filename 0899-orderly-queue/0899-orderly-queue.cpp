class Solution {
public:
    string orderlyQueue(string s, int k) {
       if (k > 1) {
            sort(s.begin(), s.end());
            return s;
        }
        // for k==1 we can rotate whole string any times like-  S="cba" we can get cba, bac,acb so in S+S ="cbacba" we need to find only lexicographically smallest string  of size n in S+S.
            string tempr=s;
            s= s+ s;
            for(int i=1;i<tempr.size();i++){
                tempr=min(tempr,s.substr(i,tempr.size()));
            }
            return tempr;
    }
};
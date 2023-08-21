class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         int n=s.length();
          string str="";
        for(int l=1;l<=n/2;++l){
            str="";
            if(n%l==0){

            int length = n/l;
            string SubString = s.substr(0,l);

            for(int i=0;i<length;++i){
            str+=SubString;
            }
            if(str==s)return true;
        }
     }
        return str==s;
    }
};
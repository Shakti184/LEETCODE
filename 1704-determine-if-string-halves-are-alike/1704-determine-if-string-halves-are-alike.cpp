class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=0,c=0,v=0,d=0;
        n=s.size();
        vector<char>m={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(int i=0;i<n;i++){
            if(i==n/2){
                d=1;
            }
            if(d==0){
                for(int j=0;j<10;j++){
  
                    if(s[i]==m[j]) {
                        v++;
                        break;
                    }
                }

            }else{
                for(int j=0;j<10;j++){
                    if(s[i]==m[j]) {
                        c++;
                        break;
                    }
                }
            }
        }
        if(v==c) return true;
        return false;
    }
};
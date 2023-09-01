class Solution {
public:
    vector<int> countBits(int n) {
        int c=0;
        vector<int>v;
        for(int i=0;i<=n;i++){
            c=i;
            int b=0;
            while(c){
                if(c & 1==1) b++;
               c= c>>1;
            }
            v.push_back(b);
        }
        return v;
    }
};
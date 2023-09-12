class Solution {
public:
    int minDeletions(string s) {
        
        int n=s.size();
        
        unordered_map<int,int>m;
        unordered_map<int,int>v;
        
        for(int i=0;i<n;i++){
            m[s[i]-'a']++;
        }
        
        int count=0;
        
        for(int i=0;i<m.size();i++){
            if(v.find(m[i])!=v.end()){
                while(v.find(m[i])!=v.end()&&m[i]!=0){
                    count++;
                    m[i]-=1;
                }
                v[m[i]]+=1;
            }else{
                v[m[i]]+=1;
            }
        }
        return count;
    }
};
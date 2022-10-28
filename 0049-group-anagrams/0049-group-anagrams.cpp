class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        int n=strs.size();
        unordered_map<string,vector<string>>m;
        for(int i=0;i<n;i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            if(m.find(s)==m.end()){
                m[s].push_back(strs[i]);
            }else{
                m[s].push_back(strs[i]);
            }
        }
        for(auto i:m){
            v.push_back(i.second);
        }
        return v;
    }
};
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        int n=s.size();
        
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        vector<pair<int,char>>v;
        
        for(auto &i: m){
            v.push_back({i.second,i.first});
        }
        string ans;
        sort(v.begin(),v.end());
        for(auto i: v){
            int a=i.first;
            char c=i.second;
            while(a--){
                ans+=c;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
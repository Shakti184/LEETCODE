class Solution {
public:
    int earliestFullBloom(vector<int>& pT, vector<int>& gT) {
        vector<pair<int,int>>v;
        int n=pT.size();
        for(int i=0;i<n;i++){
            v.push_back({gT[i],pT[i]});
        }
        sort(v.begin(),v.end());
        int res=0;
        for(auto [g,p]:v){
            res=max(res,g)+p;
        }
        return res;
    }
};
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        vector<vector<int>>ans,v(n+1);
        for(int i=0;i<n;i++){
            v[groupSizes[i]].push_back(i);
        }
        for(int i=1;i<v.size();i++){
            int ele=v[i].size();
            if(ele>0){
                int r=ele/i;
                int c=0;
                for(int j=0;j<r;j++){
                    vector<int>temp;
                    int x=0;
                    while(c<n&&x<i){
                        temp.push_back(v[i][c]);
                        x++;
                        c++;
                    }
                    ans.push_back(temp);
                }
                
            }
        }
        return ans;
    }
};
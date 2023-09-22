class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ns=0,os=-prices[0];
        for(int i=1;i<prices.size();i++){
            int curns=max(ns,os+prices[i]);
            int curos=max(ns-prices[i],os);
            ns=curns;
            os=curos;
        }
        return ns;
    }
};
class Solution {
public:
    unordered_map<int,unordered_map<int,pair<double,double>>> dp;
    pair<double,double> probabilitySoupServings(int A,int B){
        if(!A && !B){
            return {0.0,1.0};
        }
        if(!A || !B){
            return {(!A && B),0.0};
        }
        if(dp.count(A) && dp[A].count(B)) return dp[A][B];
        // Serve 100 ml of soup A and 0 ml of soup B
        pair<double,double> case1=probabilitySoupServings(max(A-100,0),B);
        // Serve 75 ml of soup A and 25 ml of soup B,
        pair<double,double> case2=probabilitySoupServings(max(A-75,0),max(B-25,0));
        // Serve 25 ml of soup A and 75 ml of soup B.
        pair<double,double> case3=probabilitySoupServings(max(A-50,0),max(B-50,0));
        // Serve 50 ml of soup A and 50 ml of soup B, and
        pair<double,double> case4=probabilitySoupServings(max(A-25,0),max(B-75,0));
        double soupA=(case1.first+case2.first+case3.first+case4.first)*(0.25);
        double soupAandB=(case1.second+case2.second+case3.second+case4.second)*(0.25);
        return dp[A][B] = {soupA,soupAandB};
    }
    
    double soupServings(int n) {
        if (n >= 4300) return 1;
        pair<double,double> answer = probabilitySoupServings(n,n);
        return answer.first+answer.second/2;
    }
};
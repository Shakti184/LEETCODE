class Solution {
public:
    int countOrders(int n) {
        int res = 0;
        if(n == 1)return 1;
        res = 1;

        // don't forget to upvote thats it\U0001f60a

        for(int i=2;i<=n;i++){
            int k = ((i-1)*2+1);
            long long no = ((k*(k+1))%1000000007)/2;
            res = (res * no)%1000000007;
        }
        return res;
    }
};
#User function Template for python3

class Solution:
    def recamanSequence(self, n):
        # code here
        dp=[0]*n 
        s=set()
        s.add(0)
        for i in range(1,n):
            val=dp[i-1]-i 
            #print(val)
            if val not in s and val>0:
                dp[i]=val
            else:
                dp[i]=dp[i-1]+i
            s.add(dp[i])
        return dp

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        
        ob = Solution()
        ans = ob.recamanSequence(n)
        for i in range(n):
            print(ans[i],end=" ")
        print()
# } Driver Code Ends
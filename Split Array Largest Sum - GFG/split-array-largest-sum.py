#User function Template for python3

class Solution:
    def splitArray(self, arr, n, k):
        # code here 
        s=sum(arr)
        low=s//k 
        high=s
        mn =10**9
        while(low<=high):
            mx=0
            mid=(low+high)//2 
            c=1 
            sm =0 
            for i in range(n):
                if sm+arr[i]<=mid:
                    sm+=arr[i]
                else:
                    c+=1 
                    mx=max(mx,sm)
                    sm=arr[i]
            mx =max(mx,sm)
            if c<=k:
                mn =min(mn,mx)
                high=mid-1
            else:
                low=mid+1
        return mn
                


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,K=map(int,input().split())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.splitArray(arr,N,K))
# } Driver Code Ends
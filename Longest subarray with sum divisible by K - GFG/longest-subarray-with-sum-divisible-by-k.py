#User function Template for python3
class Solution:
	def longSubarrWthSumDivByK (self,arr,  n, k) : 
		#Complete the function
		from collections import defaultdict
		d=dict()
		pre=[0]
		for i in arr:
		    pre.append(pre[-1]+i)
		d[0]=-1
		sm =0
		mx=0
		for i in range(n):
		    sm+=arr[i]
		    sm=sm%k 
		    if sm not in d:
		        d[sm]=i 
		    else:
		        dif =i-d[sm]
		        if dif>mx:
		            mx=dif
		return mx
		        



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

	for _ in range(0,int(input())):
		n, K = map(int ,input().split())
		arr = list(map(int,input().strip().split()))
		ob = Solution()
		res = ob.longSubarrWthSumDivByK(arr, n, K)
		print(res)




# } Driver Code Ends
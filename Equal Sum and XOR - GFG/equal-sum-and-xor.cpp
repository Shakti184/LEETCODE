//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;
 

int countValues (int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		cout<<countValues(n)<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method */
int countValues (int n)
{
   //Your code here 
   int c=0;
   for(int i=0;i<=n;i++){
       if((i^n)==(i+n))c++;
   }
   return c;
}
 
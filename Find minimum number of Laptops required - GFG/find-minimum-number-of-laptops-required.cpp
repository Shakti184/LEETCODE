//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  static bool cmp(pair<int,int>&a,pair<int,int>&b){
      if(a.first==b.first) return a.second<b.second;
      return a.first<b.first;
  }
    int minLaptops(int N, int start[], int end[]) {
        // Code here
        int ans=1;
        // vector<pair<int,int>>v(N);
        // for(int i=0;i<N;i++){
        //     v[i]={start[i],end[i]};
        // }
        sort(start,start+N);
        sort(end,end+N);
        
        int c=1;
        int i=1,j=0;
        while(i<N&&j<N){
            if(start[i]<end[j]){
                c++;
                i++;
            }
            else{
                c--;
                j++;
            }
            ans=max(c,ans);
        } 
        
        return max(c,ans);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends
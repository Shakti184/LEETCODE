//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B){
            set<char>st;
            for(int i=0;i<A.size();i++){
                st.insert(A[i]);
            }
            string ans,ans1,ans2;
            for(int i=0;i<B.size();i++){
                if(st.find(B[i])==st.end())ans1+=B[i];
            }
            st.clear();
            for(int i=0;i<B.size();i++){
                st.insert(B[i]);
            }
            for(int i=0;i<A.size();i++){
                if(st.find(A[i])==st.end())ans2+=A[i];
            }
            st.clear();
            for(int i=0;i<ans1.size();i++)st.insert(ans1[i]);
            for(int i=0;i<ans2.size();i++)st.insert(ans2[i]);
            for(auto i:st)ans+=i;
            if(ans.size()==0) return "-1";
            return ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
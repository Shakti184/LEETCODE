//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
          bool check(string & pat,string &txt,int ind){
            string str = "";
            for(int i=ind; i<txt.size() && i < ind+pat.size(); i++){
                if(pat[i-ind] != txt[i]) return false;
                str += txt[i];
            }
            return pat == str;
        }
    
        vector <int> search(string pat, string txt)
        {
            vector<int> res;
            
            for(int i=0; i<txt.size(); i++){
                if(pat[0]==txt[i] && check(pat,txt,i)){
                    res.push_back(i+1);
                    i++;
                }
            }
            
            return res;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
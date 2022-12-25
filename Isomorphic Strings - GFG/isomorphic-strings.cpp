//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2)
    {
        map<char,char>m,mm;
        int i=0,j=0;
        while(true){
            if(i>=s1.size()&&j>=s2.size()) return 1;
            if(i<s1.size()&&m.find(s1[i])==m.end()){
                if(j<s2.size()) m[s1[i]]=s2[j];
                else{
                    return 0;
                }
            }else{
                if(i<s1.size()&&j<s2.size()&&m[s1[i]]!=s2[j]) return 0;
            }
            if(i<s2.size()&&mm.find(s2[i])==mm.end()){
                if(j<s1.size()) mm[s2[i]]=s1[j];
                else{
                    return 0;
                }
            }else{
                if(i<s1.size()&&j<s2.size()&&mm[s2[i]]!=s1[j]) return 0;
            }
             i++;j++;
        }
        return 1;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
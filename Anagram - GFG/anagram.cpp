//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        map<char,int>m1,m2;
        for(int i=0;i<a.size();i++){
            m1[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            m2[b[i]]++;
        }
        // if(m1.size()!=m2.size()) return 0;
        // for(auto i:m1){
        //     if(m1[i.first]!=m2[i.first]) return 0;
        // }
        return m1==m2;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends
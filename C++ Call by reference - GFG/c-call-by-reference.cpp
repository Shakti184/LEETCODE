//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void reverse_dig(int &aa,int &bb)
{
    //Add your code here.
    string s=to_string(aa),t=to_string(bb);
    for(int i=0;i<s.size()/2;i++){
        int a=s[i]-'0';
        int b=s[s.size()-i-1]-'0';
        swap(a,b);
        s[i]=a+'0';
        s[s.size()-1-i]=b+'0';
    }
    aa=stoi(s);
    for(int i=0;i<t.size()/2;i++){
        int a=t[i]-'0';
        int b=t[t.size()-1-i]-'0';
        swap(a,b);
        t[i]=a+'0';
        t[t.size()-i-1]=b+'0';
    }
    bb=stoi(t);
}
void swap(int &a,int &b)
{
    //Add your code here.
    int temp=a;
    a=b;
    b=temp;
    
}


//{ Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}
// } Driver Code Ends
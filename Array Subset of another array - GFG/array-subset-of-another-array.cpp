//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


int FO_BS(int arr[],int n,int k){
    int l=0,h=n-1,m;
    while(l<=h){
        m=(l+h)/2;
        if((m==0&&arr[m]==k)||(m-1>=0&&arr[m-1]!=k&&arr[m]==k)) return m;
        if(arr[m]<k){
            l=m+1;
        }else{
            h=m-1;
        }
    }
    return -1;
}

int LO_BS(int arr[],int n,int k){
    int l=0,h=n-1,m;
    while(l<=h){
        m=(l+h)/2;
        if((m==n-1&&arr[m]==k)||(m+1<n&&arr[m+1]!=k&&arr[m]==k)) return m;
        if(arr[m]<=k){
            l=m+1;
        }else{
            h=m-1;
        }
    }
    return -1;
}

string isSubset(int a1[], int a2[], int n, int m) {
    int c=0;
    if(m>n) return "No";
    sort(a1,a1+n);

    map<int,int>freq;
    
    for(int i=0;i<m;i++){
        freq[a2[i]]++;
    }
    
    for(auto i: freq){
        int a=FO_BS(a1,n,i.first);
        
        int b=LO_BS(a1,n,i.first);
        //  cout<<i.first<<" " <<a<<" "<<b<<endl;
         if(a==-1||b==-1) c=1;
        if(a!=-1&&b!=-1&&abs(b-a+1)<i.second){
            c=1;
            break;
        }
    }
    if(c==0) return "Yes";
    return "No";
}
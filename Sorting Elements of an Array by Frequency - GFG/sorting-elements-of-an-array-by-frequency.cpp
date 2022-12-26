#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int,int>&a,pair<int,int>&b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    map<int,int>m;
	    for(int i=0;i<n;i++){
	        m[v[i]]++;
	    }
	    vector<pair<int,int>>m1;
	    for(auto i:m){
	        m1.push_back({i.second,i.first});
	    }
	    sort(m1.begin(),m1.end(),cmp);
	    for(auto i:m1)
	    {
	        int a=i.first;
	        while(a--)
	        {
	            cout<<i.second<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
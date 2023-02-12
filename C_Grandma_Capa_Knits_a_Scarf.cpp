#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    ll n,m; cin>>n>>m;
	    map<ll,ll> mp;
	    ll ans=0;
	    while(m--){
	        ll x,y; cin>>x>>y;
	        if(mp[x]==0){
	            mp[x]=y;
	        }
	        else{
	            ll d=mp[x];
	            mp[x]=d+y;
	        }
	        cout<<mp[x]+ans<<endl;
	        ans=mp[x]+ans;
	    }
	}
	return 0;
}

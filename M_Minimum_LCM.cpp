#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node {
    ll value = INT_MAX;
};


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll c[n], t[n];
        set<ll> s;
        map<ll,node> mp;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
            s.insert(c[i]);
        }

        for (ll i = 0; i < n; i++)
            cin >> t[i];

        if (s.size() < k)
            cout << "-1" << endl;
        else
        {
            for (ll i = 0; i < n; i++)
            {
                if (mp[c[i]] > t[i])
                    mp[c[i]] = t[i];
            }
            set<ll> st;
            for(auto x: mp){
                st.insert(x.second);
            }
            
            ll i=0;
            for(auto){

            }
            cout << sum << endl;
        }
    }
    return 0;
}
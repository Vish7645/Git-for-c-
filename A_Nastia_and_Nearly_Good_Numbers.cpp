    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long

    ll gcd(ll a,ll b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }

    ll lcm(ll a,ll b){
        return (a*b)/(gcd(a,b));
    }

    int main(){

    int t; cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;
        ll p=a*b;
        if(a==b || b!=1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<a<<" "<<2*p<<" "<<2*p+a<<endl;
        }
    }


    return 0;
    }
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long

    int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll k,a[n]; cin>>k;
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        int x=n;
        ll ans=0;
        int day=0;
        while(x){
            if(sum>k){
                sum-=(a[x-1]+day);
                x--;
                // cout<<sum<<" "<<day<<" "<<x<<endl;
            }
            else{
                int d=((k-sum)/x);
                // cout<<sum<<" "<<d<<" "<<day<<" "<<ans<<endl;
                day+=d+1;
                sum+=(d+1)*x;
                ans+=d*x+x;
            }
        }
        cout<<ans<<endl;
    }


    return 0;
    }
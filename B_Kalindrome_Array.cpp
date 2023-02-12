#include<bits/stdc++.h>
using namespace std;


int main(){

int t; cin>>t;
while(t--){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cheak=-1,ceak=-1;
    bool flag=true,clag=true;
    int x=0,y=n-1;
    int l=0,m=n-1;
    while(x<y){
        if(a[x]!=a[y]){
            if(cheak==-1){
                cheak=y;
            }
            else{
                if(a[y]!=a[cheak] && a[x]!=a[cheak]){
                    flag=false;
                    break;
                }
            }

            y--;
        }
        else{
            x++;
            y--;
        }
    }
    while(l<m){
        if(a[l]!=a[m]){
            if(ceak==-1){
                ceak=l;
            }
            else{
                if(a[l]!=a[ceak] && a[m]!=a[ceak]){
                    clag=false;
                    break;
                }
            }
            l++;
        }
        else{
            l++;
            m--;
        }
    }
    (flag || clag)? cout<<"YES"<<endl:cout<<"NO"<<endl;
}
  



  return 0;
}


// # include <bits/stdc++.h>
 
// using namespace std;
 
// typedef long long                                        ll;
// typedef long double                                      ld;
// typedef pair <int, int>                                  pii;
// typedef pair <pii, int>                                  ppi;
// typedef pair <int, pii>                                  pip;
// typedef pair <pii, pii>                                  ppp;
// typedef pair <ll, ll>                                    pll;
 
// # define A                                               first
// # define B                                               second
// # define endl                                            '\n'
// # define sep                                             ' '
// # define all(x)                                          x.begin(), x.end()
// # define kill(x)                                         return cout << x << endl, 0
// # define SZ(x)                                           int(x.size())
// # define lc                                              id << 1
// # define rc                                              id << 1 | 1
// # define fast_io                                         ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
 
// ll power(ll a, ll b, ll md) {return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md));}
 
// const int xn = 2e5 + 10;
// const int xm = - 20 + 10;
// const int sq = 320;
// const int inf = 1e9 + 10;
// const ll INF = 1e18 + 10;
// const ld eps = 1e-15;
// const int mod = 998244353;
// const int base = 257;
 
// int qq, n, m, a[xn], b[xn];
// bool ans;
 
// void check(int x){
// 	m = 0;
// 	for (int i = 1; i <= n; ++ i)
// 		if (a[i] != x)
// 			b[++ m] = a[i];
// 	for (int i = 1; i <= m; ++ i)
// 		if (b[i] != b[m + 1 - i])
// 			return;
// 	ans = true;
// }
 
// int main(){
// 	fast_io;
 
// 	cin >> qq;
// 	while (qq --){
// 		cin >> n, ans = true;
// 		for (int i = 1; i <= n; ++ i)
// 			cin >> a[i];
// 		for (int i = 1; i <= n; ++ i){
// 			if (a[i] != a[n + 1 - i]){
// 				ans = false;
// 				check(a[i]);
// 				check(a[n + 1 - i]);
// 				break;
// 			}
// 		}
// 		if (ans)
// 			cout << "YES" << endl;
// 		else
// 			cout << "NO" << endl;
// 	}
 
// 	return 0;
// }








// 1
// 1
// 2
// 1 1
// 2
// 1 2
// 2
// 2 1
// 2
// 2 2
// 3
// 1 1 1
// 3
// 1 1 2
// 3
// 1 1 3
// 3
// 1 2 1
// 3
// 1 2 2
// 3
// 1 2 3
// 3
// 1 3 1
// 3
// 1 3 2
// 3
// 1 3 3
// 3
// 2 1 1
// 3
// 2 1 2
// 3
// 2 1 3
// 3
// 2 2 1
// 3
// 2 2 2
// 3
// 2 2 3
// 3
// 2 3 1
// 3
// 2 3 2
// 3
// 2 3 3
// 3
// 3 1 1
// 3
// 3 1 2
// 3
// 3 1 3
// 3
// 3 2 1
// 3
// 3 2 2
// 3
// 3 2 3
// 3
// 3 3 1
// 3
// 3 3 2
// 3
// 3 3 3
// 4
// 1 1 1 1
// 4
// 1 1 1 2
// 4
// 1 1 1 3
// 4
// 1 1 1 4
// 4
// 1 1 2 1
// 4
// 1 1 2 2
// 4
// 1 1 2 3
// 4
// 1 1 2 4
// 4
// 1 1 3 1
// 4
// 1 1 3 2
// 4
// 1 1 3 3
// 4
// 1 1 3 4
// 4
// 1 1 4 1
// 4
// 1 1 4 2
// 4
// 1 1 4 3
// 4
// 1 1 4 4





























































// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// NO
// YES
// NO
// YES
// YES
// YES
// NO
// YES
// YES
// YES
// NO
// YES
// YES
// YES
// NO
// YES
// NO
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// NO
// NO
// YES
// NO
// YES
// NO
// YES
// NO
// NO
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// NO
// NO
// YES
// NO
// NO
// NO
// YES
// NO
// NO
// NO
// YES
// YES
// YES
// YES
// YES
// NO
// NO
// NO
// YES
// NO
// YES
// NO
// YES
// NO
// NO
// NO
// YES
// YES
// YES
// YES
// YES
// NO
// NO
// NO
// YES
// NO
// NO
// NO
// YES
// NO
// NO
// YES
// YES
// YES
// NO
// NO
// YES
// YES
// YES
// YES
// NO
// YES
// NO
// NO
// NO
// YES


























































































// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// NO
// YES
// NO
// YES
// YES
// YES
// NO
// YES
// YES
// YES
// NO
// YES
// YES
// YES
// NO
// YES
// NO
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// NO
// NO
// YES
// NO
// YES
// NO
// YES
// NO
// NO
// YES
// YES
// YES
// YES
// YES
// YES
// YES
// NO
// NO
// YES
// YES
// NO
// NO
// YES
// YES
// NO
// NO
// YES
// YES
// YES
// YES
// YES
// NO
// YES
// NO
// YES
// NO
// YES
// NO
// YES
// NO
// YES
// NO
// YES
// YES
// YES
// YES
// YES
// NO
// NO
// YES
// YES
// NO
// NO
// YES
// YES
// NO
// NO
// YES
// YES
// YES
// NO
// NO
// YES
// YES
// YES
// YES
// YES
// YES
// NO
// NO
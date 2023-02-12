// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){

//    int t; cin>>t;
//    while(t--){
//       int n; cin>>n;
//       int a[n],b[n],c[n];
//       ll sum=0;
//       for(int i=0;i<n;i++){
//         cin>>a[i];
//         if(a[i]==0){
//             sum++;
//         }
//         b[i]=a[i];
//         c[i]=a[i];
//       }
//       ll cum=sum;
//       ll kum=sum;
//       for(int i=0;i<n;i++){
//         if(a[i]==0){
//             sum--;
//             a[i]=1;
//             break;
//         }
//       }
//       for(int i=n-1;i>=0;i--){
//         if(b[i]==1){
//             b[i]=0;
//             cum++;
//             break;
//         }
//       }
//       ll ans=0,ans2=0,curr=n-cum,ans3=0,can=n-kum;
//       ll current=n-sum;
//       for(int i=n-1;i>=0;i--){
//           if(a[i]==0){
//             ans+=current;
//           }
//           else{
//             current--;
//           }

//           if(b[i]==0){
//             ans2+=curr;
//           }
//           else{
//             curr--;
//           }

//           if(c[i]==0){
//             ans3+=can;
//           }
//           else{
//             can--;
//           }
//       }
//     //   cout<<ans<<" "<<ans2<<" "<<ans3<<endl;
//       vector<ll> v={ans,ans2,ans3};
//       sort(v.begin(),v.end());
//       cout<<v[2]<<endl;
//    }


//   return 0;
// }


// #include <iostream>
// using namespace std;
// #define int long long
// int a[200010],b[200010];
// signed main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		int ans=0;
// 		int l=1,r=n,res1=0,res0=0,sum=0,num1=0,num0=0;
// 		for(int i=1;i<=n;i++){
// 			cin>>a[i];
// 			if(a[i]==1)num1++;
// 			else num0++;
// 			if(!a[i])ans+=num1;
// 		}

// 		while(a[r]==0)r--,res0++;
// 		while(a[l]==1)l++,res1++;
// 		cout<<max(max(ans,ans-res0+num1-1),ans-res1+num0-1)<<endl;
// 	}
// }
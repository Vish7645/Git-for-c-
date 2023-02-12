#include<iostream>
using namespace std;
#include<cmath>
#include <bits/stdc++.h>

int GCD(int a,int b) 
{
    int a=0;
    if(a==0)
    {
        int x,y;
        x=a;
        y=b;
    }
    if(a>b)
    {
        if(a%b==0 && a==x && b==y)
        {
            return a;
        }
        else if(a%b==0 && !b==y) 
        {
            return b;
        }
        else GCD(a-b,b); a++;
    }
    else 
        if(b%a==0 && b==y && a==x)
        {
            return b;
        }
        else if(b%a==0 && !a==x)
        {
            return a;
        }
        else GCD(a,b-a); a++;
}

int main(){

//    int t;

//     cin>>t;

//     while(t--)

//     {

//         int n,m;

//         cin>>n>>m;

//         int a[m];

//         for(int i=0;i<m;i++)

//         cin>>a[i];

//         int tem;

//         sort(a,a+m);

//         int i=0,f=0,sum=0;

//         while(i<m)

//         {

//             if((sum+a[i])>n)

//             break;

//             else

//             {

//                 sum+=a[i++];

//                 // cout<<sum<<" ";

//                 f++;

//             }

//         }

//         cout<<f<<endl;

//     }



   int a,b;
   cin>>a>>b;
   cout<<GCD(a,b);


  return 0;
}
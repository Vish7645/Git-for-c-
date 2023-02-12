#include<iostream>
using namespace std;
#include <bits/stdc++.h>
#include <set>
// bool checkNum(int arr[], int size, int x) 
// {
   
//     if(size==0)
//         return false;
//     else{
//     if(arr[size]==x)
//         return true;
//     else{
//         checkNum(arr,size-1,x);
//     }
//     }
 
// }

int main(){

            // to find distinct element



//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
//     vector<int> freq(1e5+1,0);
//     for(int i=0;i<n;i++)
//     {
//         freq[a[i]]++;
//     }
//     int count=0;
//     for(int j=0;j<n;j++)
//     {
//         if(!freq[j]==0)
//         {
//             count++;
//         }
//         else continue;
//     }



   // complexity of sort is n*logn

            // set --> (1) distinct
            //         (2) sorted

    // set<int> s;
    // cout<<s.size()<<endl;   //0   
    // s.insert(5);
    // cout<<s.size()<<endl;    //1
    // s.insert(2);
    // s.insert(2); // s did not include 2 again due it not repeat the element

    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    // set<int> s;
    // for(int i=0;i<n;i++)
    // {
    //     s.insert(a[i]);    // O(NlogN)
    // }
    // cout<<s.size()<<endl;
    
    //    complexity

    // s.size --> O(1)
    // s.empty --> O(1)
    // s.insert --> logN  // N --> Current size
       
    //    iterator

     // 2, 5, 6, 7, 7 

    //  set<int> s;

    //  s.insert(2);
    //  s.insert(4);
    //  s.insert(3);
    //  s.insert(7);
    // // auto it = s.begin();
    // // cout<<*it<<endl;
    // // // auto it2 =s.begin()+1;  // it shows error
    // // // auto it = s.begin()++;  // it will not change value of s.begin it only go next iterator

    // //     // here also property is we can't change value which is insert in set 
    // //     //or this this is only to o upper element

    // // it++; // 5
    // // it++; // 6
    // // it++;  // 7
           

    // for(auto it = s.begin(); it!=s.end();it++)
    // {
    //     cout<<*it<<" ";
    // } cout<<endl;

    // s.erase(3);  // log(N)

    // for(auto x:s)  // in auto loop it directly direct to element not it's adress
    // {
    //     cout<<x<<" ";
    // }  cout<<endl;

    // s.insert(9);  // insertion take place by sorted order
    // for(auto x:s) 
    // {
    //     cout<<x<<" ";
    // }
    
    //           // Erase by iterator
    
    // auto it2=s.begin();
    // s.erase(it2);
          
    // //       //for greater values i mean 3rd   // To erase by index

    // for(int i=0;i<3;i++)
    // {
    //     it2++;
    // }
    // s.erase(it2);     /// O(logN)

    // for(auto x:s)
    // {
    //   cout<<x<<" ";
    // }
    
   
    //   // to find a query or key present or not in bunch if present return -1 if not then insert it 
    //   // in arrey it not work
    
    // int key;
    // cin>>key;

    // auto it=s.find(key);
    
    // if(it == s.end())
    // {
    //     cout<<"Not Present"<<endl;
    // }
    // else  
    //   cout<<"Present";
    //   s.erase(it);


    //            // Ub & Lb
    
    // auto it=s.lower_bound(6);    // O(logN)  also on arrey same 
    // auto it=s.lower_bound(key);
    
    // if(it==s.end())
    // {
    //     cout<<"-1"<<endl;
    // }
    // else cout<<*it<<endl;
    //      // to cheak present or not
    //     if(*it==key)
    //     {
    //         cout<<"Present"<<endl;
    //     }
    //     else cout<<"Not Present"<<endl;


    //                // Count
    
    // int x = s.count(key);  // O(logN)
    // cout<<x<<endl;
    

              // Multiset
    
    // multiset<int> ms;
    // ms.insert(5);
    // ms.insert(8);
    // ms.insert(8);
    // ms.insert(3);
    // ms.insert(0);
    // ms.insert(0);
    // ms.insert(2);
    // for(auto v : ms)
    // {
    //     cout<<v<<" ";
    // }
    // cout<<endl;
    // cout<<ms.size()<<endl;


    // cout<<ms.size()<<endl;     //0
    
    // auto it =ms.begin();
    // for(auto it =ms.begin();it!=ms.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
      
      // Here erase are of two way 
      // 1 --> By Value ( it will delete all the value similar to that)
      // 2 --> By Iterater (Here value delete only at that index)

    // int n;
    // cin >> n;
   
    // int a[n];
     
    // for(int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
     
    // int f=ms.count(2)     // it will give all frequency

    // pair<int,int> p;
    // p.first=10;
    // p.second=20;
    // cout<<p.first<<" "<<p.second<<endl;
    
    // pair<char,int> p;
    // p.first='a';
    // p.second=20;
    // cout<<p.first<<" "<<p.second<<endl;

                // More than two
    
    // pair<char,pair<int,int>>  p1;
    // p1.first='a';

    // p1.second.first=10;
    // p1.second.second=20;
             
    //               // or

    // pair<int,int> p2;
    // p2.first=10;
    // p2.second=20;
    // p1.second=p2;
                                       
                                       // Short Cut
    
    // pair<int,int> p1=(1,2);

    // pair<int,int> p1(10,20);
    // pair<int,int> p2(20,30);
    // if(p1>p2)
    // {
    //     cout<<"Yes"<<endl;
    // }
    // else cout<<"No"<<endl;  // It only cheak for p1.first and p2.first by default



























  return 0;
}
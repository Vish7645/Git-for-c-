#include<iostream>
using namespace std;
#include <bits/stdc++.h>

bool cheak(string &s,int n)
{
  // stack<char> s;
  // for(int i=0;i<n;i++)
  // {
  //    if(s[i]=='(')
  //    {
  //      s.push(s[i]);
  //    }
  //    else 
  //    {
  //      if(s.size()>0)s.pop();
  //      else{
  //        return false;
  //      }
  //    }
  // }
  // // return (s.size()==0);
  // if(s.size()) return false;
  // else return true;


  stack<char> s;
  for(int i=0;i<n;i++)
  {
     if(s[i]=='(')
     {
      //  s.push(s[i]);
      cnt++;
     }
     else 
     {
      //  if(s.size()>0)s.pop();
      //  else{
      //    return false;
      //  }
      if(!cnt=0)
      {
          cnt--
      }
      else return false;
     }
  }
  return (cnt==0);
}

int main(){

  //  int n;
  //  cin>>n;

  //  stack<int> s;
  //  for(int i=0;i<=n-1;i++)
  //  {
  //      int h;
  //      cin>>h;
  //      s.push(h);
  //  }
  //  int m;
  //  cin>>m;
  //  for(int i=0;i<m;i++)
  //  {
  //     s.pop(); 
  //  }
   

       // so in stack we only access only last index

             // 1 , 3 , 5 , 10
    
    // stack<int> s;
    // for(int i=0;i<n;i++)
    // {
    //   cout<<v.top();
    //   s.pop();       // it will print i n reverse order 
      
    // }

            
            // to print in same order

    // vector<int> v;           
    // for(int i=0;i<n;i++)
    // {
    //     v.push_back(s.pop());
    //     s.pop();
    // }

    // for(int i=n;i>=0;i++)
    // {
    //   cout<<v[i]<<" ";
    // }

        // to make in reverse order in another method   // so in below we a another stack(s1) to store no in reverse order 
    
    // stack<int> s1;
    // for(int i=0;i<n;i++)
    // {
    //   s1.push(s.top());
    //   s.pop();
    // }
    // while(s1.size())
    // {
    //   cout<<s1.top()<<" ";
    //   s1.pop();
    // }

                  // s.empty() --> boolean means yea or no

  











  return 0;
}
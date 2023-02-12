#include <iostream>
#include<stack>
using namespace std;

int main()
{
    // cout<<"Hello World";
  string str; cin>>str;
  stack<string> s;
  
  int count=0;

  bool flag=false;

  for(int i=0;i<str.size();i++)
  {
      if(str[i]=='}')
      {
          if(s.size()==0)
          {
              flag=true;
              break;
          }
          else{
              s.pop();
          }
      }
      else
      {
          s.push("{");
        //   cout<<s.top()<<" ";
      }
  }
//   cout<<endl;

  if(flag==true)
  {
      cout<<"No "<<s.size()<<endl;
  }
  else{
      if(s.size()!=0)
      {
          cout<<"No "<<s.size()<<endl;
      }
      else 
      {
          cout<<"Yes "<<s.size()<<endl;
      }
  }

    return 0;
}

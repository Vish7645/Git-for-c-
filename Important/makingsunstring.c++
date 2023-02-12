#include <bits/stdc++.h>
using namespace std;

void makesubstring(string& s,string& x){
    x=x+s[0];
    s.erase(s.begin());
    return;
}

int main(){

//    string s; cin>>s;
//    string x;
//    int t=s.size();
//    for(int i=0;i<t-1;i++){
//       makesubstring(s,x);
//       cout<<x<<" "<<s<<endl;
//    }

     // other method

string l; cin>>l;
int d=l.size();
string h;
for(int i=0;i<d;i++){
    h=l.substr(0,i+1);
    cout<<h<<endl;
}


  return 0;
}
#include<iostream>
using namespace std;
#include<map>
     //// Default value of the map is 0;
int main(){

   map<int,string> m;

   m[1]="ase";    // O(log(N))  n --> size of map
   m[4]="skjw";
   m[2]="wkmsj";
   m.insert({1,"dmkc"});
   map<int,string> :: iterator it;
  //  for(it=m.begin();it!=m.end();it++)
  //  {
  //      cout<<(*it).first<<" "<<(*it).second<<endl; // cout<<it->first<<" "<<it->second
  //  }
   for(auto &it: m){
      cout<<it.first<<" "<<it.second<<endl;
   }
                      // m.find return iterator of the value if not present then it will return m.end
   
  //  auto it1=m.find(2);   // O(log(N)
  //  if(it1==m.end())
  //  {
  //      cout<<"No"<<endl;
  //  }
  //  else cout<<(*it1).first<<" "<<(*it1).second<<endl;

                       // m.erase work on both iterator qnd direct

    // auto it2=m.find(5);
    // m.erase(it2);  // here is the problem is that if we input the value which is not present in map then it shows error to remove that fault use cheak condition

    // if we initialise the key of map then it will take the space irreceptive of we are enter its value or not
    // more worse in string as a key so for to sort it also take time then it's TC is increse  as --> s.size*log(N)

  return 0;
}
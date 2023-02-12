#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // vector<int> v={2,3,4,5,6};
    //   // don't do this v[n]={a,w,r,d} because 
    // for(int i=0;i<v.size();i++)
    // {
    //    cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // //          // Iterator
    
    // vector<int> :: iterator it=v.begin();  // v.begin() --> Pointing to first element
    // cout<<*it<<" ";  // it will print first element of vector
    
                                //// in iterator ++ --> it will locate next element of iterator 
                                //// but +1 --> will locate next location and maps and sets are not in continous 
                                //// location so it show error in them but not in vector due vector store in continous location    
   
    // for(it=v.begin();it !=v.end(); ++it)
    // {
    //     cout<<*it<<endl;
    // }

                        // Pair
    
    // vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
    // vector<pair<int,int>> :: iterator it;
    // for(it = v_p.begin(); it != v_p.end();++it)
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }             
    // for(it = v_p.begin(); it != v_p.end();++it)
    // {
    //     cout<<(it -> first)<<" "<<(it ->second)<<endl;
    // }     


                        // short cut

    // vector<int> v={2,3,4,5,6};
    // for(int value : v)  
    // {
    //     cout<<value<<" ";
    // }
    // cout<<endl;

                 // Here values come the copy of original value so if we alter them them 
                 // nothing will happen to original value
                 // to solve it we use refences

    // vector<int> v={2,3,4,5,6};  
    // for(int &value : v)  
    // {
    //     value++;
    // }
    
    // for(int value : v)  
    // {
    //     cout<<value<<" ";
    // }
    // cout<<endl;

               // Auto --> to automatically identify the datatype
    
    // auto a=1.0;
    // cout<<"a = "<<a<<" "<<typeid(a).name()<<endl;  // from typeid(variable).name we can also know their datatype

    //  vector<int> v={3,5,1,4,2};
    //  for(auto it=v.begin();it!=v.end();++it)
    // {
    //     cout<<*it<<" "<<typeid(it).name()<<endl;
    // } 
               //   To erase a particular element 

    //  delete 2nd element
 
    // v.erase(v.begin()+1);
    
    // for(auto ele:v)
    // cout<<ele<<" ";

    // vector<int> v={2,3,4,5,6};
    // v.erase(v.begin()+1);
    // for(auto ele:v)   // So here from auto it make a copy of 
    // cout<<ele<<" ";


    //       //sort
    
    // int b=v.back();
    // sort(v.begin(),v.begin());

        // upperbound lower bound
        // basically upperbound and lowerrbound return the address of no;
        // Simply applied on sorted arrey

                    // For Arrey
    
    // int n;
    // cin>>n;
    // int arr[5]={5,3,7,4,9};
    // // for(int i=0;i<5;i++)
    // // {
    // //   cin>>arr[i];
    // // }
    // sort(arr,arr+5);
    // int* ptr1=lower_bound(arr+4,arr+5,5);
    // int* ptr2=upper_bound(arr,arr+5,5);
    // if(ptr1==arr+5){
    //      cout<<"Not Found";
    // }
    // else cout<<*ptr1;
    // if(ptr2==arr+5){
    //      cout<<"Not Found";
    // }
    // else cout<<*ptr2;


                     // For Vector
    
    // vector<int> v={5,9,3,7,0};
    // sort(v.begin(),v.end()); // 0,3,5,7,9
    // auto it=upper_bound(v.begin(),v.end(),5);
    // if(it==(v.end()))
    // {
    //   cout<<"NOT FOUND";
    // }
    // else cout<<*it;








  return 0;
}
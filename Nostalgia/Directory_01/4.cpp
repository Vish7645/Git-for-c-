#include <iostream>
#include <cmath>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int  main(){
        // int n,sum=0;
        // cin>>n;
        // for(int i=1;i<=n;i++){
        //     if(n%i==0){
        //         sum=sum+1;
        //     }
        // }
        // cout<<sum;

          int i;
          cin>>i;
          int x=sqrt(i);
          for(int a=1;a<=x;a++){
              if(i%a==0){
                  cout<<a;
                  cout<<i/a<<endl;
              }
          }

        // int i;
        // cin>>i;
        // for(int a=1;a*a<=i;a++){
        //     if(i%a==0){
        //         cout<<a;
        //         cout<<i/a<<endl;
        //     }
        // }

     //    int num;
     //    cin>>num;
     //    for(int i=2;i<=sqrt(num);i++)
     //    {
     //         int count=0;
     //         if(num%i==0)
     //         {
                  
     //              if(num%i==0){
     //                   while(true){
     //                        count++;
     //                        num=num/i;
                            
     //                   }
     //              }
     //              else {
     //              break;}
     //         }
     //         cout<<count<<" "<<i<<endl;
     //    }
         
                      
                     // Array
        
        // int N;
        // cin>>N;
        // int arr[N];
        // for(int i=0;i<=N-1;i++)
        // {
        //     cin>>arr[i];
        // }
        // for(int i=0;i<=N-1;i++){
        //     cout<<arr[i]<<" ";
        // }
        
    
     //    int N;
     //    cin>>N;
     //    int arr[N];
     //    for(int i=0;i<=N-1;i++){
     //        cin>>arr[i];
     //    }
     //    int even=0,odd=0;
     //    for(int i=0;i<=N-1;i++){
     //        if(arr[i]%2==0){
     //            int a=arr[i];
     //            even++;
     //            cout<<a<<" Even"<<endl;
     //        }
     //        else {
     //             int b=arr[i];
     //             odd++;
     //             cout<<b<<" Odd"<<endl;
     //        }
     //    }
     //    cout<<even<<" "<<odd<<" ";


     //    int N;
     //    cin>>N;
     //    int arr[N];
     //    for(int i=0;i<=N-1;i++){
     //        cin>>arr[i];
     //    }
     //    int max=arr[0];
     //    for(int i=1;i<=N-1;i++){
     //        if(arr[i]>max){
     //            max=arr[i];
     //        }
     //    }
     //    cout<<max<<endl;
        

        
      //   int N;
      //   cin>>N;
      //   int arr[N];
      //   for(int i=0;i<=N-1;i++){
      //       cin>>arr[i];
      //   }
      //   int max=INT_MIN;
      //   int position;
      //   for(int i=0;i<=N-1;i++){
      //       if(arr[i]>max){
      //           position=i;
      //           max=arr[i];
      //       }
      //   }
      //   cout<<max<<endl;
      //   cout<<position<<endl;
        

        // int N;
        // cin>>N;
        // int arr[N];
        // for(int i=0;i<=N-1;i++){
        //     cin>>arr[i];
        
        // int min=INT_MAX;
        // int position;
        // for(int i=0;i<=N-1;i++){
        //     if(arr[i]<min){
        //         position=i;
        //         min=arr[i];
        //     }
        // }
        // cout<<min<<endl;
        // cout<<position<<endl;
        // }

             // if  arrey value exceed the range of of int then we use long long int and their limit is INT64_MAX 
             //and here we also have to change the data type so valuew can't overflow

        // int len;
        // cin>>len;

        // char arr[len];
        // for(int i=0;i<=len-1;i++){
        //     cin>>arr[i];
        // }
        // for(int i=0;i<=len;i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;


             // if we dont'n know length we use string
        
      //   string str;// character arrey
      //   cin>>str;// home
      //   cout<<str<<endl;// home

      //   char ch;
      //   cin>>ch;   //home
      //   cout<<ch;  //h



        // to know the size of character

      //    string str;
      //    cin>>str;
        
      //    cout<<str<<endl;
      //    int len=str.size();
      //    cout<<len<<endl;
        



               //
        
      //   int num=5;

      //   int arr[num];// after here we cant change value of arr
         
      //    arr[0]=10;
      //    arr[1]=3;
      //    arr[2]=5;
      //    arr[3]=20;
      //    arr[4]=7;
      //    cout<<arr[num]<<" ";
         
        // if we want to alter the size then we use vector

      //   int num=5;
      //   vector <int> arr(num);

      //    arr[0]=10;
      //    arr[1]=3;
      //    arr[2]=5;
      //    arr[3]=20;
      //    arr[4]=7;

        //  // to add one more 
        
        // arr.push_back(100);// arr[5]=100// 10 3 5 20 7 100

        // // to cheak size

        // cout<<arr.size();
        
        // for(int i=0;i<=num-1;i+=){
        //     cout<<arr[i]<<" ";
        // }


               // to sort no
         
         // int num=5;

         // int arr[num];

         // arr[0]=10;
         // arr[1]=20;
         // arr[2]=50;
         // arr[3]=40;
         // arr[4]=0;

         // sort(arr,arr+num);// 0  --> 5-1(num-1)


























            
        





















































        
    return 0;
}
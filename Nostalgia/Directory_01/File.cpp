#include <bits/stdc++.h>

using namespace std;
int main()
{
   // Loop :  for print for multiple time
   // Loop : for , while ,do while

// for( initialisation ; condition ; update){
//     work
// }

//  1--> 10
// int num; //ini --> conditi --> true/false

// for(num=1 (1)(5) ; num<=10 (2)(6); num++ (4)){
//     cout<<num<<endl; //(3)(7).....
// }

// ini cheak(true) work 
// upda cheak work
// update ......


// cheak(terminate) 

//1 2 ....10


// int num; 
// for(num=1 ; num<=10 ; num++){
//     cout<<num<<endl; 
// }

// int a;

// for(a=100;a>=0;--a){
//     cout<<a<<endl;
// }

// int sum = 0;
// for(int i=1 ; i<=100 ; i++){
//     sum = sum +i; //sum = 0+1 --> 1
//     sum = 1+2 --> 3
//     .......
  
// }
// cout<<sum<<endl;// 5050

// int sum = 0;
// for(int i=1 ; i<=100 ; i++){
//     sum = sum +i; //sum = 0+1 --> 1
//     //sum = 1+2 --> 3
//     //.......
//   cout<<sum<<endl;//  1 --> 1+2 --> ...
// }

// int prod=1;
// for(int i=1 ; i<=10 ; i++){
//     prod=prod*i;
// }
//  cout<<prod<<endl;

    // while

// int i=1;

// while(i<=10){
//     cout<<i<<endl;
//     i=i+1;
// }

// int i=11;
// while(i<=10){
//     cout<<i<<endl;
//     i=i+1;
// }


// int i=1;
// do{
//     cout<<i<<endl;
//     i++;
// }
// while(i<=10);


// int i=20;
// do{
//     cout<<i<<endl;//  it first print without any cheaking
//     i++;// after printing it chrak
// }
// while(i<=10);


    // 1 --> 5 in 1--> 10

// for(int i=1 ; i<=10 ; i++){
//     if(i==6){
//         break;
//     }
//     cout<<i<<endl;
// }
// cout<<"Yes"<<endl;

// int i=1;
// while(i<=10){
//     if(i==6){
//         break;
//     }
//     cout<<i<<endl;
//     i++;
// }


// int i=1
// while(1){
//     cout<<i;// infinite
//     i++
// }

// int i=0;
// while(true){
//     if(i==10){
//        break;
//     }
//     cout<<i<<endl;
//     i++;
// }


   //continue 1 2 3 4 5  7 8 10
// for (int i=1 ; i<=10 ; ++i){

//      cout<<"yes"<<endl;
//      if(i==6){
//          cout<<"a"<<endl;
//          continue;
         
//      }
//      if(i==9){
//           cout<<"b"<<endl;
//          continue;       
//      }
// cout<<i<<endl;
// }

//  int i=1;
//  while(i<=10){
//      if(i==6 || i==9){
//         i++;// if vwe not use i++ here then it it print only 1 2 3 4 5 and it goes to infinite loop 
//         continue;
//      }
//      cout<<i<<endl;
//      i++;
//  }

          //find greater power of 2 than num enter

// int powerof2=1;
// int num;
// cin>>num;
// int ans;

// while(1){
//     if(powerof2<num){
//         powerof2=powerof2*2;
//         ans=powerof2;
//     }
//     else{
//         ans=powerof2;
//         break;
//     }  
//     
// }
// cout<<ans<<endl;



// int n;
// cout<<"Enter No = ";
// cin>>n;
// int powerof2,ans;

// for(powerof2=1;powerof2<n;powerof2*2){}
// ans=powerof2*2;
// cout<<ans;
 
// int i=1;
// for(;;){
//     cout<<i<<endl;
//     i++;
//     if(i==10){
//         break;
//     }
// }

// int N;
// cin>>N;
// int cnt=0;// because initially no of diviser if 0
// for(int i=1;i<=N; i++){
//     if(N%i==0){
//          cnt++;
//     }
// }
// cout<<cnt<<endl;

// int N;
// cin>>N;
// int i;
// for(i=2;i<N;i++){
//    if(N%i==0){
//       break;
//    }
// }
// if(i==N){
//     cout<<"Prime"<<endl;
// }
// else{
//     cout<<"Non-Prime"<<endl;
// }

// int N;
// cin>>N;
// bool flag=false;
// int i;
// for(i=2;i<N;i++){
//    if(N%i==0){
//        flag=true;
//       break;
//    }
// }
// if(flag==false){
//     cout<<"Prime"<<endl;
// }
// else{
//     cout<<"Non-Prime"<<endl;
// }

// for( int row=1;row<=5 ; row++){
//     for(int col=1; col<=row ;col++){
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }










































    return 0;
}



#include <iostream>
using namespace std;

int  main(){
//    int x=5%2;
//    cout<<x<<endl;//remainder 1  

//    int y=10%2;//0
//    int a=-5/3;// -1
//    // it first calculate by taking + then apply other sign it has

//Relational operator(<,>,=,=<,.=,==)
//= --> assignment operator

//== --> equivalent or cheak
// 5>3--> true
// yes --> 1 or true
// no --> 0 or false
// int a=5>3;
// cout<<a<<endl;// return 1

// bool ans=5>3;
// cout<<ans;// 1

// bool ans=5<3;
// cout<<ans;// 0

// bool ans=5==5;
// cout<<ans;// 1

// bool ans=5>=3;
// cout<<ans;// 1

// bool ans=5<=3;
// cout<<ans;// 0




//conditional statement(if , else)

// if(condition){
//       // if condition is satisfy --> it is returning true/1
// }
// else{
//     //if condition return false
// }

// int age =20;

// if(age>18){
//     cout<<"can vote";
// }
// else{
//     cout<<"cannot vote";
// }

// int num;
// cin>>num;

// if (num==5){
//      cout<<"equal";
// }
// else{
//     cout<<"not equal";
// }


// int num;
// cin>>num;

// if(num%2==0){
//     cout<<"even";
// }
// else{
//     cout<<"odd";
// }

// 5%2 --> 1 --> false 1==0 --> else
//4%2 --> 0==0 --> true --> if





// Muntiple condition


// exp --> salary
// 5 year --> 10000
// 6 year --> 20000
// 7 year --> 30000


// int exp;
// cin>>exp;

// if(exp==5){// 1st --> false
//     cout<<"10000";
// }
// else if(exp==6){// 1st,2nd --> false
//     cout<<"20000";
// }
// else if(exp==7){// 1st,2nd,3rd --> false
//     cout<<"30000";
// }
// else{// 1st, 2nd, 3rd --> false, 4th --> true
//     cout<<"nothing";
// }



//logical opewrator(!--> not,&& --> and,|| --> or)

// if(condition1 || condition2){
//     // 1  1-->1
//     // 1  0-->1
//     // 0  1-->1
// }
// else{
//     // 0  0-->0
// } 


// //2 or 3 --> yes
// // no

// int num;
// cin>>num;

// if(num==2 || num==3){
//     cout<<"yes";
// }
// else{
//     cout<<"no";
// }


// a,e,i,o,u --> yes
// no

// char ch;
// cin>>ch;

// if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
//     cout<<"yes";
// }
// else{
//     cout<<"no";
// }



// if (condition1 && condition2){
//     // 1  1-->1 
//     cout<<"yes";
// }
// else{
//     // 1  0-->1
//     // 0  1-->1
//     // 0  0-->0
//     cout<<"no";
// } 


//multiple of 6

// int num;
// cin>>num;

// if(num%2==0 && num%3==0){
//     cout<<"muntiple of 6";
// }
// else{
//     cout<<"no";
// }

// text
// 10 --> D
// 11 50 --> C
// 51 70 --> B
// 71 100 --> A

// int marks;
// cin>>marks;

// if(marks>=71 ){
//     cout<<"A";
// }
// else if(marks>=51 && marks<=70){
//     cout<<"B";
// }
// else if(marks>=11 && marks<=50){
//     cout<<"C";
// }
// else{
//     cout<<"D";
// }

//not gate 
//0 --> 1 
//1 --> 0

// if(!conditional1){
//     //condition is false
// }
// else{

// }


// num not 5 --> yes
//no

// int num;
// cin>>num;

// if(! (num==5)){
//     cout<<"yes";
// }
// else{
//     // num=5
//     cout<<"no";  
// }

          //OR WE MAY WRITE

// int num;
// cin>>num;

// if(num!=5){
//     cout<<"yes";
// }
// else{
    
//     cout<<"no";  
// }



//             ++

// int x=10;
// //x++;// increment --> x=x+1

// x=x+1;
// cout<<x;
// //right --> 10 + 1 --> 11 // evaluation
// //left --> x=15; //Assignment part
// // y++ --> post increment  // 11
// // ++y --> pre increment  // 11


// int y=5;
// int z=++y;

// cout<<"y = "<<y<<endl;// y =6
// cout<<"z = "<<y<<endl;//z =6

/*
int y=5;
int z=y++;

cout<<"y = "<<y<<endl;// y =5
cout<<"z = "<<y<<endl;// z =6


            //Questions

int N =10;

if(N>15) cout<<"1";
if(N<15) cout<<"2";
if(N==15) cout<<"3";
else cout<<"4"; // 2 ,4

            //we acn break now

int N =10;

//group1
if(N>15){
    cout<<"1";
}

//group2   // if from here we apply else if then it will print 2due to it satify by group2 then it will not go beyond
if (N<15){
    cout<<"2";
}

//group3
if(N==15) {
 cout<<"3";
}

//group4
else{
    cout<<"4";
}

*/

           // nested if
/*
if(c1){
    
    if(c2){
        cout<<"1";
    }
    else{
        cout<<"2";
    }
}
else{
    if(c3){
        cout<<"3";
    }
    else{
        cout<<"4";
    }
}
*/
/*
int x=5;

if(x=11){ //assignment --> x=10 and will give 10 --> true // due to in boolian otherv than 0 is 1 means true
    cout<<"yes";
}
else{
    cout<<"no";
}
*/
/*
int x=5;

if(x=0){ // no --> false so it go to else
    cout<<"yes";
}
else{
    cout<<"no";
}
*/

// int x=10 ,y=5;
// int z=x++ + --y;

// cout<<x<<" "<<y<<" "<<z<<endl;
     return 0;
}
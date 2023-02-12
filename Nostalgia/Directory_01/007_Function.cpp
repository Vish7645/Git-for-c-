#include <iostream>
using namespace std;

// int f(int a,int b)
// {
//   return a+b;
//   int ans;
//   if(a>b) ans=a;
//   else ans=b;
//   return ans;
// }
// int prime(int n)
// {
//   for (int i = 2; i * i < n; i++)
//   {
//     int a = n % i;
//     if (a == 0)
//     {
//       return "not prime"; // here it is not show error due to we define the function for and we return char
//     }
//     else
//     {
      
//     }
//   }
// }

// string prime(int n)
// {
//   for (int i = 2; i < n; i++)
//   {
//     int a = n % i;
//     if (a == 0)
//     {
//       return "not prime";
//     }
//     else
//     {
//       return "prime";
//     }
//   }
// }

// bool primecheak(int n){
//  for(int i=2;i*i<=n;i++){
//    if(n%i==0){
//       return false;// it will return the in 0,1
//    }
//  }
//  return true;
// }

// string primecheak(int n){
//  for(int i=2;i*i<=n;i++){
//    if(n%i==0){
//       return "false";
//    }
//  }
//  return "true";
// }

// void function()
// {
//   for(int i=1;i<=5;i++)
//   cout<<"Hello"<<endl;
//   return;
// }

//if we not want to use void // that case we have to use cout

// string print(){
//   return "Hello";
// }

// void swap(int x,int y)// it goes by value and update by the actuall location
// {
//   int var=y;
//   y=x;
//   x=var;
// }

// int a,b;// here it be used in any of the function below 
// void Swap(){   //cal by value
//   int var=b;
//   b=a;
//   a=var;

// }

int maxelement(int arr[],int n) //in arrey call by reference
{
  int mx=arr[0];
  for(int i=1;i<=n;i++)
  {
    mx=max(mx,arr[i]);
  }
 return mx;
}

// For 2D ARREY

// const int M=100;
// void print(int arr[][M],int n,int m)//M Should be constant thats why we use const
// {
      //print
// }

// void print(vector<int> v){
//   for(int i=0;i<=v.size();i++)cout<<v[i]<<" ";
// }
int main()
{

  // int x,y;
  // cin>>x>>y;
  // int ans =f(x,y);
  // cout<<ans<<endl;// so to change order by f(b,a)

  // int x,y;
  // cin>>x>>y;
  // cout<<f(x,y)<<endl;

  // int a, b, c, d, e;
  // cin >> a >> b >> c >> d >> e;
  // cout <<"a "<< prime(a) << endl;
  // cout <<"b "<< prime(b) << endl;
  // cout <<"c "<< prime(c) << endl;
  // cout <<"d "<< prime(d) << endl;
  // cout <<"e "<< prime(e) << endl;

  // int a;
  // cin>>a;
  // cout<<primecheak(a)<<endl;

  // to cheak return string like true or false

  // int a;
  // cin>>a;
  // cout<<primecheak(a)<<endl;

  // to print directly of header
  // function();
  
  // cout<<print()<<endl;

  // int a,b;
  // cin>>a>>b;
  // swap(a,b);// the value of x and y goes in function not the x,y
  // cout<<a<<" "<<b;

  //  cin>>a>>b;
  //  Swap();
  //  cout<<a<<" "<<b<<endl;

  int n;
  cin>>n;
  int arr[n];
  // for(int i=0;i<=n;i++)
  // cin>>arr[i];
 
  // cout<<maxelement(arr,n)<<endl;

  for(int i=0;i<=n-1;i++)
  {
    cin>>arr[i];
  }
  cout<<maxelement(arr,n)<<endl;

  return 0;
}
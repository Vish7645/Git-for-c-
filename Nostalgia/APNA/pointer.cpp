#include<iostream>
using namespace std;

void increment(int a)
{
    a++;
}
void swap(int *a,int *b)   // so basically what is going here is where we pass the address in function below  so here it take
{        // its values by using * then it applly operation
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){

//    int a=10;
//    int*pnt=&a;  // here we take int dt because it take address of int dt so any case other data type then we write that data type
//    cout<<&a<<endl;
//    cout<<pnt<<endl;   
      
      //// for below line --> here from pnt we know the address then after using * we can see what value stored in them and also can change
      
//    cout<<*pnt<<endl;  //dereferencing of pointer    || so basically * use for actuall value
//    *pnt =20;
//    cout<<a<<endl;  // so from here we see it print 20 so pointer change value from address

//    pnt++;
//    cout<<pnt<<endl; // it will print +4 because int take 4 byte // in case char +1  // in bool +2


// int arr[]={10,20,30};
// cout<<*arr<<endl;   // here we derefencing the value  // in array  the Arrey name pointing to its first index not it's value

// cout<<arr<<endl;    // print addresss of arr or arr[0] || here arr itself store the address so need not to worry about
// int*pnt=arr;
// cout<<pnt;

// int arr[]={10,20,30};
// int*pnt=arr;
// for(int i=0;i<3;i++)
// {
//     cout<<*pnt<<endl;   // 10 20 30
//     pnt++;
//                     //we can also do
    
//     cout<<*(arr+i)<<endl;  //10 20 30

//     cout<<arr[i]<<endl;
// }


                           //   arr[i]  == arr + i

                //pointer to pointer

// int a=10;
// int*p=&a;
// int**q=&p;
// cout<<"Value of a "<<a<<endl;
// cout<<"address of a "<<&a<<endl;
// cout<<"address of a "<<p<<endl;
// cout<<"value at adress of a"<<*p<<endl;
// cout<<"adress of p "<<&p<<endl;
// cout<<"adress of p "<<q<<endl;
// cout<<"Address of a "<<*q<<endl;
// cout<<"value at adress of address p "<<**q<<endl;
// cout<<"adress of q"<<&q<<endl;


                        //Passing pointers to function

// int n=10;
// increment(n);
// cout<<n<<endl;


// int a=1,b=2;
// int*ap=&a;
// int*bp=&b;
// swap(ap,bp);   // in function we pass by value
// cout<<a<<" "<<b;


// int x=10;
// // int *ptr=x;
// cout<<ptr<<endl;
// cout<<*ptr<<endl;


























  return 0;
}
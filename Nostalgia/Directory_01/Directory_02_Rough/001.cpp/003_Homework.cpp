#include <iostream>
#include <cmath> 

using namespace std;

int  main(){
        

    //    int num,count=0;
    //    cout<<"Enter the no = ";
    //    cin>>num;
       
    //    for(int i=1;i<=num;i++){
    //        if(num%i==0){
    //           cout<<i<<" "<<endl;
    //           count=count+1;
    //        }
    //     }
    //        if(count==2){
    //            cout<<"Prime";
    //        }
    //        else cout<<"Non-Prime"<<endl;
    //    cout<<"No of Divisor = ";


    // int num;
    // cout<<"Enter the no = ";
    // cin>>num;
    

    // for(int i=1;i<=sqrt(num);i++){
    //     if(num%i==0){
    //         cout<<i<<endl;
    //         cout<<num/i<<endl;
    //     }
    // }

    int num;
    cout<<"Enter the no = ";
    cin>>num;
    
    for(int i=1;i*i<=num;i++){

        if(num%i==0){
            cout<<i<<endl;
            cout<<num/i<<endl;
        }
    }

    
       




















    return 0;
}
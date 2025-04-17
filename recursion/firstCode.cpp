#include<iostream>
using namespace std;

// void func(int n){
//     if(n==0){              this called base condition
//         cout<<"Happy Birthday";
//         return;
//     }
//     cout<<n<<" days left"<<endl;
//     func(n-1);
// }
//--------------------------------------------------

// void preven(int n){
//     if(n<2){             // this is called base condition
//         return;
//     }
//     cout<<n<<endl;
//     preven(n-2);
//
//-----------------------------------------------------------

void print(int end){
   if(end==1){
    cout<<end<<endl;
    return;
   }
    print(end-1);
   cout<<end<<endl;
   
  
}


int main(){

// func(5);
//-----------------------------------------------------
// preven(8);

print(10);

    return 0;
}
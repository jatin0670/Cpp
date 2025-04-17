#include<iostream>
using namespace std;

int fact(int a){
    int ans=1;
    for(int i=1; i<=a; i++){
        ans*=i;
    }
    return ans;
}

int main(){

int n;
cout<<"Enter your number: ";
cin>>n;

cout<<fact(n);


    return 0;
}
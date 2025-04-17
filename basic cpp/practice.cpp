#include<iostream>
using namespace std;

void prime(int a){

  if(a<=2){
    cout<<"prime number";
    return;
  }
  for(int i=2; i<a; i++){
    if(a%i==0){
      cout<<"not prime";
    }
    else{
      cout<<"prime";
    }
    return;
  }
}

int main(){

int n;
cout<<"Enter your number: ";
cin>>n;
prime(n);

  return 0;
}
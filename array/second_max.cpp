#include<iostream>
using namespace std;

int main(){

int arr[] = {12,34,56,78,90};
int one, two;
one = two = INT_MIN;

for(int i=0; i<5; i++){
    if(arr[i]>one){
        two = one;
        one = arr[i];
    }
    else if(arr[i]>two){
        two = arr[i];
    }
  
}

cout<<two;

    return 0;
}
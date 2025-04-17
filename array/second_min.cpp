#include<iostream>
using namespace std;

int main(){

int arr[] = {12,4,56,22,67};
int one, two;
one = two = INT_MAX;

for(int i=0; i<5; i++){
    if(arr[i]<one){
        two = one;
        one = arr[i];
    }
    else if(arr[i]<two){
        two = arr[i];
    }
}

cout<<two;

    return 0;
}